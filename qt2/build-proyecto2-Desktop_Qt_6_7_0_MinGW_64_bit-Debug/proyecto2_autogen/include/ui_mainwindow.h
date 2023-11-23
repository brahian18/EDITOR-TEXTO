/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionEliminar;
    QAction *actionImprimir;
    QAction *actionCopiar;
    QAction *actionPegar;
    QAction *actionCortar;
    QAction *actionFuente;
    QAction *actionColor;
    QAction *actionDerecha;
    QAction *actionIzquierda;
    QAction *actionCentro;
    QAction *actionAcerca_del_programa;
    QAction *actionActualizar;
    QAction *actionDeshacer;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEdicion;
    QMenu *menuAlinear;
    QMenu *menuAcerca_de;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconos/messi.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconos/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon1);
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("actionGuardar");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/iconos/guardarcomo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon2);
        actionEliminar = new QAction(MainWindow);
        actionEliminar->setObjectName("actionEliminar");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iconos/quitar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEliminar->setIcon(icon3);
        actionImprimir = new QAction(MainWindow);
        actionImprimir->setObjectName("actionImprimir");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/iconos/imprimir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImprimir->setIcon(icon4);
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName("actionCopiar");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/iconos/copiar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon5);
        actionPegar = new QAction(MainWindow);
        actionPegar->setObjectName("actionPegar");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/iconos/pegar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPegar->setIcon(icon6);
        actionCortar = new QAction(MainWindow);
        actionCortar->setObjectName("actionCortar");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/iconos/cortar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCortar->setIcon(icon7);
        actionFuente = new QAction(MainWindow);
        actionFuente->setObjectName("actionFuente");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/iconos/fuente.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFuente->setIcon(icon8);
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName("actionColor");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/iconos/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon9);
        actionDerecha = new QAction(MainWindow);
        actionDerecha->setObjectName("actionDerecha");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/iconos/derecha.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDerecha->setIcon(icon10);
        actionIzquierda = new QAction(MainWindow);
        actionIzquierda->setObjectName("actionIzquierda");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/iconos/izquierda.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIzquierda->setIcon(icon11);
        actionCentro = new QAction(MainWindow);
        actionCentro->setObjectName("actionCentro");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/iconos/centro.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCentro->setIcon(icon12);
        actionAcerca_del_programa = new QAction(MainWindow);
        actionAcerca_del_programa->setObjectName("actionAcerca_del_programa");
        actionActualizar = new QAction(MainWindow);
        actionActualizar->setObjectName("actionActualizar");
        actionDeshacer = new QAction(MainWindow);
        actionDeshacer->setObjectName("actionDeshacer");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName("menuArchivo");
        menuEdicion = new QMenu(menubar);
        menuEdicion->setObjectName("menuEdicion");
        menuAlinear = new QMenu(menuEdicion);
        menuAlinear->setObjectName("menuAlinear");
        menuAcerca_de = new QMenu(menubar);
        menuAcerca_de->setObjectName("menuAcerca_de");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEdicion->menuAction());
        menubar->addAction(menuAcerca_de->menuAction());
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionActualizar);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionEliminar);
        menuArchivo->addAction(actionImprimir);
        menuArchivo->addAction(actionDeshacer);
        menuEdicion->addAction(actionCopiar);
        menuEdicion->addAction(actionPegar);
        menuEdicion->addAction(actionCortar);
        menuEdicion->addAction(actionFuente);
        menuEdicion->addAction(actionColor);
        menuEdicion->addAction(menuAlinear->menuAction());
        menuAlinear->addAction(actionDerecha);
        menuAlinear->addAction(actionIzquierda);
        menuAlinear->addAction(actionCentro);
        menuAcerca_de->addAction(actionAcerca_del_programa);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
#if QT_CONFIG(shortcut)
        actionAbrir->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
#if QT_CONFIG(shortcut)
        actionGuardar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
#if QT_CONFIG(shortcut)
        actionEliminar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionImprimir->setText(QCoreApplication::translate("MainWindow", "Imprimir", nullptr));
#if QT_CONFIG(shortcut)
        actionImprimir->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopiar->setText(QCoreApplication::translate("MainWindow", "Copiar", nullptr));
#if QT_CONFIG(shortcut)
        actionCopiar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPegar->setText(QCoreApplication::translate("MainWindow", "Pegar", nullptr));
#if QT_CONFIG(shortcut)
        actionPegar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCortar->setText(QCoreApplication::translate("MainWindow", "Cortar", nullptr));
#if QT_CONFIG(shortcut)
        actionCortar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFuente->setText(QCoreApplication::translate("MainWindow", "Fuente", nullptr));
#if QT_CONFIG(shortcut)
        actionFuente->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionColor->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        actionDerecha->setText(QCoreApplication::translate("MainWindow", "Derecha", nullptr));
        actionIzquierda->setText(QCoreApplication::translate("MainWindow", "Izquierda", nullptr));
        actionCentro->setText(QCoreApplication::translate("MainWindow", "Centro", nullptr));
        actionAcerca_del_programa->setText(QCoreApplication::translate("MainWindow", "Acerca de", nullptr));
        actionActualizar->setText(QCoreApplication::translate("MainWindow", "Actualizar", nullptr));
#if QT_CONFIG(shortcut)
        actionActualizar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDeshacer->setText(QCoreApplication::translate("MainWindow", "Deshacer", nullptr));
#if QT_CONFIG(shortcut)
        actionDeshacer->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
        menuEdicion->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        menuAlinear->setTitle(QCoreApplication::translate("MainWindow", "Alinear", nullptr));
        menuAcerca_de->setTitle(QCoreApplication::translate("MainWindow", "Ayuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
