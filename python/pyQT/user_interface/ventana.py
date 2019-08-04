from ventana_ui import *

# Herencia del Widget QMainWindow de PyQT.
class MainWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QtWidgets.QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)

        self.label.setText("Click on button")
        self.pushButton.setText("Click me")

		# Conectamos los eventos con sus acciones
        self.pushButton.clicked.connect(self.actualizar)



    def actualizar(self):
        self.label.setText("¡Acabas de hacer clic en el botón!")


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