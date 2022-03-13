#include "include/sortwindow.hpp"
#include "ui_sortwindow.h"

SortWindow::SortWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SortWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Visualization of sorting algorithms");
    scene = new QGraphicsScene(this);

    ui->graphView->setScene(scene);
    sceneHeight = ui->graphView->size().height();
    sceneWidth = ui->graphView->size().width();
}

SortWindow::~SortWindow()
{
    delete ui;
}



void SortWindow::on_speedSlider_sliderMoved(int position)
{
    speedMs = position;
}

