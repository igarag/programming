# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'opencv_interface.ui'
#
# Created by: PyQt5 UI code generator 5.13.0
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(1500, 900)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.options = QtWidgets.QTabWidget(self.centralwidget)
        self.options.setGeometry(QtCore.QRect(430, 70, 621, 621))
        self.options.setTabShape(QtWidgets.QTabWidget.Triangular)
        self.options.setObjectName("options")
        self.blur = QtWidgets.QWidget()
        self.blur.setObjectName("blur")
        self.verticalLayoutWidget = QtWidgets.QWidget(self.blur)
        self.verticalLayoutWidget.setGeometry(QtCore.QRect(60, 60, 521, 236))
        self.verticalLayoutWidget.setObjectName("verticalLayoutWidget")
        self.blur_options = QtWidgets.QVBoxLayout(self.verticalLayoutWidget)
        self.blur_options.setContentsMargins(0, 0, 0, 0)
        self.blur_options.setObjectName("blur_options")
        self.kernel_label = QtWidgets.QLabel(self.verticalLayoutWidget)
        self.kernel_label.setObjectName("kernel_label")
        self.blur_options.addWidget(self.kernel_label)
        self.kernel_size_slider = QtWidgets.QSlider(self.verticalLayoutWidget)
        self.kernel_size_slider.setMinimum(1)
        self.kernel_size_slider.setMaximum(33)
        self.kernel_size_slider.setPageStep(1)
        self.kernel_size_slider.setProperty("value", 11)
        self.kernel_size_slider.setSliderPosition(11)
        self.kernel_size_slider.setOrientation(QtCore.Qt.Horizontal)
        self.kernel_size_slider.setInvertedAppearance(False)
        self.kernel_size_slider.setInvertedControls(False)
        self.kernel_size_slider.setTickPosition(QtWidgets.QSlider.TicksAbove)
        self.kernel_size_slider.setObjectName("kernel_size_slider")
        self.blur_options.addWidget(self.kernel_size_slider)
        self.anchor_label = QtWidgets.QLabel(self.verticalLayoutWidget)
        self.anchor_label.setObjectName("anchor_label")
        self.blur_options.addWidget(self.anchor_label)
        self.anchor_slider = QtWidgets.QSlider(self.verticalLayoutWidget)
        self.anchor_slider.setOrientation(QtCore.Qt.Horizontal)
        self.anchor_slider.setTickPosition(QtWidgets.QSlider.TicksAbove)
        self.anchor_slider.setObjectName("anchor_slider")
        self.blur_options.addWidget(self.anchor_slider)
        self.border_type_label = QtWidgets.QLabel(self.verticalLayoutWidget)
        self.border_type_label.setObjectName("border_type_label")
        self.blur_options.addWidget(self.border_type_label)
        self.border_slider = QtWidgets.QSlider(self.verticalLayoutWidget)
        self.border_slider.setOrientation(QtCore.Qt.Horizontal)
        self.border_slider.setTickPosition(QtWidgets.QSlider.TicksAbove)
        self.border_slider.setObjectName("border_slider")
        self.blur_options.addWidget(self.border_slider)
        self.options.addTab(self.blur, "")
        self.binarize = QtWidgets.QWidget()
        self.binarize.setObjectName("binarize")
        self.binarize_min = QtWidgets.QTextEdit(self.binarize)
        self.binarize_min.setGeometry(QtCore.QRect(140, 110, 111, 41))
        self.binarize_min.setObjectName("binarize_min")
        self.binarize_max = QtWidgets.QTextEdit(self.binarize)
        self.binarize_max.setGeometry(QtCore.QRect(310, 110, 111, 41))
        self.binarize_max.setObjectName("binarize_max")
        self.label_9 = QtWidgets.QLabel(self.binarize)
        self.label_9.setGeometry(QtCore.QRect(340, 70, 61, 31))
        self.label_9.setObjectName("label_9")
        self.label_10 = QtWidgets.QLabel(self.binarize)
        self.label_10.setGeometry(QtCore.QRect(260, 197, 61, 31))
        self.label_10.setObjectName("label_10")
        self.comboBox = QtWidgets.QComboBox(self.binarize)
        self.comboBox.setGeometry(QtCore.QRect(150, 240, 271, 31))
        self.comboBox.setObjectName("comboBox")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.binarize_min_2 = QtWidgets.QLabel(self.binarize)
        self.binarize_min_2.setGeometry(QtCore.QRect(170, 67, 61, 31))
        self.binarize_min_2.setObjectName("binarize_min_2")
        self.options.addTab(self.binarize, "")
        self.input_label = QtWidgets.QLabel(self.centralwidget)
        self.input_label.setGeometry(QtCore.QRect(20, 30, 180, 24))
        self.input_label.setObjectName("input_label")
        self.output_label = QtWidgets.QLabel(self.centralwidget)
        self.output_label.setGeometry(QtCore.QRect(1070, 30, 180, 24))
        self.output_label.setObjectName("output_label")
        self.input_image = QtWidgets.QLabel(self.centralwidget)
        self.input_image.setGeometry(QtCore.QRect(20, 100, 400, 400))
        self.input_image.setStyleSheet("image: url(:/logo/lena.png);")
        self.input_image.setObjectName("input_image")
        self.output_image = QtWidgets.QLabel(self.centralwidget)
        self.output_image.setGeometry(QtCore.QRect(1070, 100, 400, 400))
        self.output_image.setStyleSheet("image: url(:/logo/lena.png);")
        self.output_image.setObjectName("output_image")
        self.run = QtWidgets.QPushButton(self.centralwidget)
        self.run.setGeometry(QtCore.QRect(600, 740, 250, 100))
        self.run.setStyleSheet("font: 20pt \"Noto Sans\";")
        self.run.setObjectName("run")
        self.label_3 = QtWidgets.QLabel(self.centralwidget)
        self.label_3.setGeometry(QtCore.QRect(20, 550, 400, 250))
        self.label_3.setObjectName("label_3")
        self.label_4 = QtWidgets.QLabel(self.centralwidget)
        self.label_4.setGeometry(QtCore.QRect(1070, 550, 400, 250))
        self.label_4.setObjectName("label_4")
        self.load_button = QtWidgets.QPushButton(self.centralwidget)
        self.load_button.setGeometry(QtCore.QRect(220, 30, 180, 34))
        self.load_button.setObjectName("load_button")
        self.save_button = QtWidgets.QPushButton(self.centralwidget)
        self.save_button.setGeometry(QtCore.QRect(1270, 30, 180, 34))
        self.save_button.setObjectName("save_button")
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 1500, 30))
        self.menubar.setObjectName("menubar")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)
        self.options.setCurrentIndex(0)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.kernel_label.setText(_translate("MainWindow", "Kernel Size - "))
        self.anchor_label.setText(_translate("MainWindow", "Anchor"))
        self.border_type_label.setText(_translate("MainWindow", "Border Type"))
        self.options.setTabText(self.options.indexOf(self.blur), _translate("MainWindow", "Blur"))
        self.binarize_min.setHtml(_translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Noto Sans\'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>"))
        self.binarize_min.setPlaceholderText(_translate("MainWindow", "0"))
        self.binarize_max.setHtml(_translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:\'Noto Sans\'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>"))
        self.binarize_max.setPlaceholderText(_translate("MainWindow", "255"))
        self.label_9.setText(_translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Max</span></p></body></html>"))
        self.label_10.setText(_translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Type</span></p></body></html>"))
        self.comboBox.setItemText(0, _translate("MainWindow", "THRESH_BINARY"))
        self.comboBox.setItemText(1, _translate("MainWindow", "THRESH_BINARY_INV"))
        self.comboBox.setItemText(2, _translate("MainWindow", "THRESH_TRUNC"))
        self.comboBox.setItemText(3, _translate("MainWindow", "THRESH_TOZERO"))
        self.comboBox.setItemText(4, _translate("MainWindow", "THRESH_TOZERO_INV"))
        self.binarize_min_2.setText(_translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Min</span></p></body></html>"))
        self.options.setTabText(self.options.indexOf(self.binarize), _translate("MainWindow", "Binarize"))
        self.input_label.setText(_translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Input</span></p></body></html>"))
        self.output_label.setText(_translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Output</span></p></body></html>"))
        self.input_image.setText(_translate("MainWindow", "<html><head/><body><p align=\"center\">Input Image</p></body></html>"))
        self.output_image.setText(_translate("MainWindow", "<html><head/><body><p align=\"center\">Output Image</p></body></html>"))
        self.run.setText(_translate("MainWindow", "Run"))
        self.label_3.setText(_translate("MainWindow", "<html><head/><body><p align=\"center\">INFO</p></body></html>"))
        self.label_4.setText(_translate("MainWindow", "<html><head/><body><p align=\"center\">INFO</p></body></html>"))
        self.load_button.setText(_translate("MainWindow", "Load"))
        self.save_button.setText(_translate("MainWindow", "Save"))
#import logo_rc


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())
