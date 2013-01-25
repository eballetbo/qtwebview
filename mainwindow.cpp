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

#include <QWebFrame>
#include <QtCore/QCoreApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    m_pWebView = new QWebView(this);
    Q_CHECK_PTR(m_pWebView);
    // set position and size
    m_pWebView->setGeometry(0,0,800,480);
    // disable scrollbar
    m_pWebView->page()->mainFrame()->setScrollBarPolicy(Qt::Horizontal, Qt::ScrollBarAlwaysOff);
    m_pWebView->page()->mainFrame()->setScrollBarPolicy(Qt::Vertical, Qt::ScrollBarAlwaysOff);
    // load web page
    m_pWebView->load(QUrl("http://localhost/index.html"));
}

MainWindow::~MainWindow()
{

}
