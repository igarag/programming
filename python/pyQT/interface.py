# -*- coding: utf-8 -*-

import sys
sys.path.insert(1, './user_interface')

from opencv_interface import *


# Herencia del Widget QMainWindow de PyQT.
class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QtWidgets.QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)


        # Con esto se puede cambiar el texto a las etiquetas
        #self.label.setText("Click on button")
        #self.run.setText("Click me")

		# Conectamos los eventos con sus acciones
        self.run.clicked.connect(self.actualizar)



    def actualizar(self):
        self.input_label.setText("HEEYY YOU CLICKED ON RUN!!!!")


if __name__ == "__main__":

	# creamos una aplicación de PyQt 
	# con el widget QApplication, al 
	# que le pasaremos una lista vacía. 
	# Normalmente aquí se pasarían argumentos 
	# de la linea de comandos,
    app = QtWidgets.QApplication([])

    # Se crea una instancia de nuestra 
    # MainWindow y la mostraremos con su 
    # método show().
    window = MainWindow()
    window.show()

    # Se pone en marcha el bucle. Si no 
    # se incluye está línea el programa
    # se ejecutará y cerrará inmediatamente.
    app.exec_()