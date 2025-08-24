/*
    sosFiles - A file browser.
    Copyright (C) 2025  Sophie Short

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "mainWindow.h"

sosware::mainWindow::MainWindow::MainWindow(QWidget *parent)
{
    this->setWindowTitle("sosFiles");
    addMenubar();
    showWindow();
}

sosware::mainWindow::MainWindow::~MainWindow()
{

}

void sosware::mainWindow::MainWindow::showWindow()
{
    this->showMaximized();
}

void sosware::mainWindow::MainWindow::setCentralWidget(QWidget *widget)
{
    this->setCentralWidget(widget);
}

void sosware::mainWindow::MainWindow::addMenubar()
{
    QMenu *fileMenu = new QMenu(this->menuBar());
    fileMenu->setTitle("&File");
    this->menuBar()->addMenu(fileMenu);

    QAction *settingsAction = new QAction(fileMenu);
    settingsAction->setText("&Settings");
    fileMenu->addAction(settingsAction);

    QAction *exitAction = new QAction(fileMenu);
    exitAction->setText("E&xit");
    fileMenu->addAction(exitAction);


    QMenu *aboutMenu = new QMenu(this->menuBar());
    aboutMenu->setTitle("&About");
    this->menuBar()->addMenu(aboutMenu);

    QAction *aboutAction = new QAction(aboutMenu);
    aboutAction->setText("&About");
    aboutMenu->addAction(aboutAction);
}
