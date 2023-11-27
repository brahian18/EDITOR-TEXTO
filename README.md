# EDITOR-TEXTO
**DESCRIPCION**
<br>
Este codigo es el de un editor de texto que tiene una gran variedad de funciones, entre ellas se incluyen:
<br>
-Guardar: Permite guardar archivos en formato HTML, y modificar los ya guardados.
<br>
-Abrir: Puedes abrir archivos HTML para su modificacion.
<br>
-Imrpimir: Permite imprimir los archivos al convertirlos en PDF 
<br>
-Edicion: Todo sobre edicion de texto en cuanto a formatos es posible, fuentes, color, subrayado, alineación, etc.
<br>
-Comandos basicos: Están habilitados los comandos basicos tales como el CTRL+C, CTRL+V, CTRL+Z, etc.
<br>
<br>
**ARQUITECTURA**
<br>
**CMakeLists:** El archivo CMakeLists.txt en un proyecto de Qt se utiliza para configurar y controlar la construcción del proyecto mediante CMake, que es una herramienta de construcción y configuración de proyectos multiplataforma. CMake simplifica el proceso de compilación al proporcionar un conjunto de instrucciones para generar archivos de construcción específicos para el sistema operativo y el compilador que estás utilizando.
<br>
**mainwindow.h:**
Contiene la declaracion de las clases y sus miembros.
<br>
**main.cpp:** Es el punto de partida del programa, aqui agregamos la clase que maneja los recursos GUI y aqui main le pasa el control a QT.
<br>
**mainwindow.cpp** :Aqui se hace la implementacion de las clases, esto es lo que le da funcionalidad al programa.
<br>
**mainwindow.ui:** Es un archivo de diseño de interfaz gráfica creado y editado con Qt Designer. Este archivo contiene la descripción visual y estructural de la interfaz de usuario (UI) para la ventana principal de la aplicación.
<br>
<br>
**FUNCIONES**
<br>
1. **on_actionAbrir_triggered()** <br>
   - Abre un cuadro de diálogo para seleccionar un archivo HTML. <br>
   - Lee el contenido del archivo seleccionado y lo muestra en un QTextEdit.<br>

2. **on_actionGuardar_triggered()** <br>
   - Abre un cuadro de diálogo para seleccionar la ubicación donde se guardará el archivo HTML.<br>
   - Guarda el contenido del QTextEdit en el archivo seleccionado.<br>

3. **on_actionActualizar_triggered()** <br>
   - Actualiza el archivo HTML guardado previamente con el contenido actual del QTextEdit.<br>

4. **on_actionEliminar_triggered()** <br>
   - Cierra la aplicación (ventana principal).<br>

5. **on_actionImprimir_triggered()** <br>
   - Abre un cuadro de diálogo para seleccionar un archivo HTML.<br>
   - Utiliza wkhtmltopdf (una herramienta externa) para convertir el archivo HTML en un archivo PDF y lo abre.<br>

6. **on_actionCopiar_triggered()** <br>
   - Copia el texto seleccionado en el QTextEdit al portapapeles.<br>

7. **on_actionPegar_triggered()** <br>
   - Pega el contenido del portapapeles en la posición actual del QTextEdit.<br>

8. **on_actionCortar_triggered()** <br>
   - Corta el texto seleccionado en el QTextEdit y lo coloca en el portapapeles.<br>

9. **on_actionFuente_triggered()** <br>
   - Abre un cuadro de diálogo para seleccionar la fuente y el estilo de texto para el QTextEdit.<br>

10. **on_actionColor_triggered()** <br>
    - Abre un cuadro de diálogo para seleccionar el color del texto y aplica el color al texto seleccionado en el QTextEdit.<br>

11. **on_actionDerecha_triggered()** <br>
    - Alinea el texto a la derecha en el QTextEdit.<br>

12. **on_actionIzquierda_triggered()** <br>
    - Alinea el texto a la izquierda en el QTextEdit.<br>

13. **on_actionCentro_triggered()** <br>
    - Centra el texto en el QTextEdit.<br>

14. **on_actionAcerca_del_programa_triggered()** <br>
    - Muestra un cuadro de diálogo con información sobre el programa.<br>

15. **on_actionDeshacer_triggered()** <br>
    - Deshace la última acción realizada en el QTextEdit.<br>
    
<br>

**MANUAL DE USUARIO** <br> <br>
![image](https://github.com/brahian18/EDITOR-TEXTO/assets/151563027/99421567-4bde-4e70-9582-89c850d87516) <br>
En cuanto a archivo podemos abrir archivos, guardar archivos, y actualizar archivos anteriormente guardados. Al eliminar cerramos el editor, al imprimir convertimos el archivo en un archivo pdf que es imprimible, y al deshacer deshacemos la ultima acción hecha en el editor de texto. <br> <br>
![image](https://github.com/brahian18/EDITOR-TEXTO/assets/151563027/1f06c84d-278d-4cf7-8126-44ace9a45046) <br>
En cuanto a edicion encontramos las opciones de cortar, copiar y pegar que ya todos conocemos con sus respectivos atajos por teclado. Aparte de esto encontramos la opcion de fuentes, al presionarla se abrira un cuadro de dialogo donde podras escoger la fuente, el tamaño, opciones como subrayado, negrita, cursiva, etc. En cuanto a color al presionar nos abre un cuadro de dialogo para escoger el color del texto. Y por ultimo escogemos la alineacion, ya sea a la izquierda, derecha o centro. <br> <br>
**HECHO POR:** <br>
Brahian Stiven Ortiz Cruz <br>
Universidad Tecnologica de Pereira <br>
Ingenieria en Sistemas <br>
Facultad de Ingenierias <br>
Programación II <br>
brahianortiz7@gmail.com <br>







