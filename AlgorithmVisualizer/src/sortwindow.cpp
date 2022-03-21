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
        col->setRect(x, sceneHeight-columnsHeight[i], columnsWidth, columnsHeight[i]);
        col->setBrush(QBrush(colColor));
        col->setPen(QPen(Qt::black,penWidth));

        scene->addItem(col);
        i++;
        x += columnsWidth;
    }


}

void SortWindow::testSwap(unsigned col1, unsigned col2)
{
    auto col1Rect = columns[col1]->rect();
    auto col2Rect = columns[col2]->rect();
    auto col1ColumnPos = col1Rect.left();
    auto col2ColumnPos = col2Rect.left();

    col1Rect.moveLeft(col2ColumnPos);
    col2Rect.moveLeft(col1ColumnPos);

    columns[col1]->setRect(col1Rect);
    columns[col2]->setRect(col2Rect);
    std::swap(columns[col1], columns[col2]);
}

void SortWindow::initAlgorithms()
{
    alg = new SortingAlgorithms(numOfColumns, speedMs, algorithmId, columnsHeight, this);
    connect(alg, SIGNAL(swapColumns(unsigned, unsigned)), this, SLOT(swapColumns(unsigned, unsigned)));
    connect(alg, SIGNAL(sortEnd()), this, SLOT(sortEnd()));
    connect(alg, SIGNAL(changeColor(unsigned, unsigned, QColor)), this, SLOT(changeColor(unsigned, unsigned, QColor)));
    connect(alg, SIGNAL(changeColor(unsigned, QColor)), this, SLOT(changeColor(unsigned, QColor)));
    connect(alg, SIGNAL(changeColumn(unsigned, double)), this, SLOT(changeColumn(unsigned, double)));
    connect(this, SIGNAL(changeSpeed(int)), alg, SLOT(changeSpeed(int)));
}


void SortWindow::swapColumns(unsigned col1,unsigned col2)
{
    auto col1Rect = columns[col1]->rect();
    auto col2Rect = columns[col2]->rect();
    auto col1ColumnPos = col1Rect.left();
    auto col2ColumnPos = col2Rect.left();

    col1Rect.moveLeft(col2ColumnPos);
    col2Rect.moveLeft(col1ColumnPos);

    columns[col1]->setRect(col1Rect);
    columns[col2]->setRect(col2Rect);
    std::swap(columns[col1], columns[col2]);
}

// changes the height of column
void SortWindow::changeColumn(unsigned col, double height)
{
    columns[col]->setRect(columns[col]->rect().x(), sceneHeight-height, columnsWidth, height);

}
// changes the color of two columns
void SortWindow::changeColor(unsigned col1, unsigned col2, QColor color)
{
    columns[col1]->setBrush(QBrush(color));
    columns[col2]->setBrush(QBrush(color));
}

// changes the color of column
void SortWindow::changeColor(unsigned col, QColor color)
{
    columns[col]->setBrush(QBrush(color));
}

void SortWindow::sortEnd()
{
    sortStatus = 0;
}

SortWindow::~SortWindow()
{
    delete ui;
}



void SortWindow::on_speedSlider_sliderMoved(int position)
{
    speedMs = position;
    emit changeSpeed(position);
}

void SortWindow::on_startButton_clicked()
{
    if (!sortStatus) {
        sortStatus = 1;
        numOfColumns = ui->amountBox->value();

        speedMs = ui->speedSlider->value();

        draw();
        algorithmId = ui->listWidget->currentRow();

        //ui->textBrowser->setText("test");
        initAlgorithms();
        alg->start();
    }
}


void SortWindow::on_listWidget_currentRowChanged(int currentRow)
{
    ui->textBrowser->clear();
    ui->textBrowser->insertPlainText(algInformation[currentRow].second);
}

