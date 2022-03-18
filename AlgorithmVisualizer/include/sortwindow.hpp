#ifndef SORTWINDOW_HPP
#define SORTWINDOW_HPP

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPainter>
#include "sortingalgorithms.hpp"

namespace Ui {
class SortWindow;
}

class SortWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SortWindow(QWidget *parent = nullptr);
    ~SortWindow();


private slots:
    void on_speedSlider_sliderMoved(int position);
    void on_startButton_clicked();

    void swapColumns(unsigned col1,unsigned col2);
    void sortEnd();
    void changeColor(unsigned col1, unsigned col2, QColor color);
    void changeColor(unsigned col, QColor color);
    void changeColumn(unsigned col, double height);

signals:
    void changeSpeed(int speed);

private:
    Ui::SortWindow *ui;

    QGraphicsScene *scene;
    QGraphicsView *view;
    SortingAlgorithms *alg;

    std::vector<QGraphicsRectItem*> columns;
    std::vector<double> columnsHeight;

    double sceneHeight;
    double sceneWidth;
    double columnsWidth;
    double penWidth = 2;
    // 0-not active, 1-active, 2-break and reset
    int sortStatus = 0;
    unsigned numOfColumns = 10;
    int speedMs = 100;
    int algorithmId = 1;

    QColor colColor = QColor("cyan");
    QColor updateColor = QColor("green");

    void draw();
    void testSwap(unsigned col1, unsigned col2);
    void initAlgorithms();
};

#endif // SORTWINDOW_HPP
