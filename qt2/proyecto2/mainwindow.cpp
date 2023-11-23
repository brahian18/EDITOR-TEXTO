#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include <QFont>
#include <QFontDialog>
#include <QtWidgets>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);
    nombreDelArchivoGuardado = "";
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAbrir_triggered()
{
    QFile arch;
    QString nombreArch;
    nombreArch = QFileDialog::getOpenFileName(this, "Abrir archivo HTML", QDir::homePath(), "Archivos HTML (*.html)");

    if (nombreArch.isEmpty())
        return;

    arch.setFileName(nombreArch);
    arch.open(QIODevice::ReadOnly | QIODevice::Text);

    if (!arch.isOpen()) {
        QMessageBox::critical(this, "Error", arch.errorString());
        return;
    }

    QTextStream io(&arch);
    QString htmlContent = io.readAll();

    arch.close();

    // Configura el QTextEdit para mostrar contenido HTML
    ui->textEdit->setHtml(htmlContent);
}


void MainWindow::on_actionGuardar_triggered()
{
    QString nombreArch;
    nombreArch = QFileDialog::getSaveFileName(this, "Guardar archivo HTML", QDir::homePath(), "Archivos HTML (*.html)");

    if (nombreArch.isEmpty())
        return;

    QFile file(nombreArch);
    if (file.open(QFile::WriteOnly | QFile::Text)) {
        QTextStream out(&file);
        out << ui->textEdit->toHtml();
        file.close();
        nombreDelArchivoGuardado = nombreArch;
        QMessageBox::information(this, "Éxito", "El archivo HTML ha sido guardado.");
    } else {
        QMessageBox::critical(this, "Error", "No se pudo guardar el archivo HTML.");
    }
}


void MainWindow::on_actionActualizar_triggered() {
    QFile file(nombreDelArchivoGuardado);
    if (file.open(QFile::WriteOnly | QFile::Text)) {
        QTextStream out(&file);
        out << ui->textEdit->toHtml();
        file.close();
        QMessageBox::information(this, "Éxito", "El archivo HTML ha sido actualizado.");
    } else {
        QMessageBox::critical(this, "Error", "No se pudo actualizar el archivo HTML, guardelo o en caso de que ya esté guardado vuelvalo a guardar y sobreescribalo.");
    }
}


void MainWindow::on_actionEliminar_triggered()
{
    close();

}


void MainWindow::on_actionImprimir_triggered()
{
    QString htmlFilePath = QFileDialog::getOpenFileName(this, "Selecciona el archivo HTML", "", "Archivos HTML (*.html)");

if (!htmlFilePath.isEmpty())
{
    // Genera el nombre del archivo PDF de salida
    QString pdfFilePath = htmlFilePath;
    pdfFilePath.replace(".html", ".pdf");

    // Ejecuta wkhtmltopdf como un proceso externo
    QProcess process;
    process.start("C:\\Users\\pc\\Downloads\\qt2\\wkhtmltopdf.exe", QStringList() << htmlFilePath << pdfFilePath);
    process.waitForFinished();

    if (process.exitCode() == 0)
    {
        qDebug() << "Conversión exitosa. El archivo PDF se ha creado en: " << pdfFilePath;

            QDesktopServices::openUrl(QUrl::fromLocalFile(pdfFilePath));
            qDebug() << "Archivo PDF abierto con éxito.";
    }
    else
    {
        qDebug() << "Error en la conversión. Código de salida:" << process.exitCode();
        qDebug() << "Error:" << process.readAllStandardError();
        QMessageBox::warning(this, "Error", "Se ha producido un error durante la conversión a PDF.");
    }
}
}


void MainWindow::on_actionCopiar_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionPegar_triggered()
{
    ui->textEdit->paste();

}


void MainWindow::on_actionCortar_triggered()
{
    ui->textEdit->cut();

}


void MainWindow::on_actionFuente_triggered()
{
    bool ok;
    QFont currentFont;
    QFont font = QFontDialog::getFont(&ok, currentFont, this);

    if (ok) {
        currentFont = font;
        ui->textEdit->setFont(font);
    }
}


void MainWindow::on_actionColor_triggered()
{
    QColor color = QColorDialog::getColor(Qt::black, this, "Seleccionar color de texto");
    if (color.isValid()) {
        QTextCursor cursor = ui->textEdit->textCursor();
        QTextCharFormat charFormat = cursor.charFormat();
        charFormat.setForeground(QBrush(color));
        cursor.setCharFormat(charFormat);
        ui->textEdit->setTextCursor(cursor);
    }
}


void MainWindow::on_actionDerecha_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignRight);
}


void MainWindow::on_actionIzquierda_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignLeft);
}


void MainWindow::on_actionCentro_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignCenter);
}


void MainWindow::on_actionAcerca_del_programa_triggered()
{
    QString txt;
    txt = "Programa hecho pa ver si saco un 5 en programación";
    QMessageBox::about(this, "Procesador de texto", txt);
}




void MainWindow::on_actionDeshacer_triggered()
{
    ui->textEdit->undo();
}

