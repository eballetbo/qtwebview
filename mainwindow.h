/*
  * Copyright (C) 2013 - ISEE 2007 SL
  *
  * Author: Enric Balletbo i Serra <eballetbo@iseebcn.com>
  *
  * This file may be used under the terms of the GNU Lesser General Public
  * License version 2.1, a copy of which is found in LICENSE included in the
  * packaging of this file.
  */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QWebView>
#include <QUrl>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:

    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

private:

    QWebView* m_pWebView;
};

#endif // MAINWINDOW_H
