#include "include/sortwindow.hpp"
#include "ui_sortwindow.h"
#include <iostream>

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

void SortWindow::draw()
{
    ui->graphView->scene()->clear();

    columns.resize(numOfColumns);
    if (numOfColumns >= 100)
        penWidth = 1.0;
    else if (numOfColumns >= 200)
        penWidth = 0.1;
    columnsWidth = sceneWidth / numOfColumns;

    //setting up columns height
    double incrementBy = sceneHeight / numOfColumns;
    for(auto i = incrementBy; i <= sceneHeight; i += incrementBy)
        columnsHeight.push_back(i);

    //randomize an array
    std::random_device m_random;
    std::mt19937 e_random(m_random());
    std::shuffle(columnsHeight.begin(), columnsHeight.end(), e_random);

    unsigned i = 0;
    float x = 0.0;
    // drawing columns
    for(auto &col : columns)
    {
        col = new QGraphicsRectItem;
        col->setRect(x, sceneHeight-columnsHeight[i]+40, columnsWidth, columnsHeight[i]);
        col->setBrush(QBrush(colColor));
        col->setPen(QPen(Qt::black,penWidth));

        scene->addItem(col);
        i++;
        x += columnsWidth;
    }


}


SortWindow::~SortWindow()
{
    delete ui;
}



void SortWindow::on_speedSlider_sliderMoved(int position)
{
    speedMs = position;
}


void SortWindow::on_startButton_clicked()
{
    numOfColumns = ui->amountBox->value();
    //speedMs = ui->speedSlider->value();
    draw();
}

