include(gtest_dependency.pri)
include(../SortingAlgorithms/sortingalgorithm.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        tst_sorttest.h

SOURCES += \
        main.cpp

