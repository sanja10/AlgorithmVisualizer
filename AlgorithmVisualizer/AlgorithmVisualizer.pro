QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/graph.cpp \
    src/graphwindow.cpp \
    src/node.cpp \
    src/sortingalgorithms.cpp \
    src/sortwindow.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/undirectedGraph.cpp

HEADERS += \
    include/graph.hpp \
    include/graphwindow.hpp \
    include/mainwindow.hpp \
    include/node.hpp \
    include/sortingalgorithms.hpp \
    include/sortwindow.hpp \
    include/undirectedGraph.hpp

FORMS += \
    graphwindow.ui \
    mainwindow.ui \
    sortwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
