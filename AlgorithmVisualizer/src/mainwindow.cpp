#include "include/mainwindow.hpp"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Algorithm Visualizer");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_sortButton_clicked()
{
    sortWindow = new SortWindow();
    sortWindow->show();
    this->hide();

}


void MainWindow::on_graphButton_clicked()
{
    graphWindow = new GraphWindow();
    graphWindow->show();
    this->hide();
}

