/*
  * Copyright (C) 2013 - ISEE 2007 SL
  *
  * Author: Enric Balletbo i Serra <eballetbo@iseebcn.com>
  *
  * This file may be used under the terms of the GNU Lesser General Public
  * License version 2.1, a copy of which is found in LICENSE included in the
  * packaging of this file.
  */

#include "mainwindow.h"

#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow mainWindow;

    // don't show window frame
    mainWindow.setWindowFlags(Qt::FramelessWindowHint);
    // maximize window
    mainWindow.showMaximized();
    // run application
    return app.exec();
}
