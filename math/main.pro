TEMPLATE = app
SOURCES +=  main.cpp\
    mainwindow.cpp  aboutdialog.cpp  helpbrowser.cpp \
    moduleonedialog.cpp moduletwodialog.cpp  modulethreedialog.cpp modulefourdialog.cpp\
    module/moduleonefunction.cpp  module/modulethreefunction.cpp module/modulefourfunction.cpp module/moduletwofunction.cpp\




HEADERS +=  about.h  window.h \
    module_one.h  module_two.h module_three.h module_four.h\
    mainwindow.h  aboutdialog.h  helpbrowser.h \
    moduleonedialog.h moduletwodialog.h modulethreedialog.h modulefourdialog.h\
    module/moduleonefunction.h  module/modulethreefunction.h module/modulefourfunction.h module/moduletwofunction.h\



CONFIG += release qt
QT += core gui
TARGET = discrete

RESOURCES += \
    res.qrc

UI_DIR = uis

OTHER_FILES += \
    doc/index.html \
    doc/two.html \
    doc/three.html \
    doc/one.html \
    doc/index.html \
    doc/four.html \
    doc/five.html
