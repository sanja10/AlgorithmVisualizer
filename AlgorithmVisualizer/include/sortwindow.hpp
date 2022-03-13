#ifndef SORTWINDOW_HPP
#define SORTWINDOW_HPP

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPainter>
#include <QtWidgets>

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

private:
    Ui::SortWindow *ui;

    QGraphicsScene *scene;
    QGraphicsView *view;

    std::vector<QGraphicsRectItem*> columns;
    std::vector<double> columnsHeight;

    double sceneHeight;
    double sceneWidth;
    double columnsWidth;
    // 0-not active, 1-active, 2-break and reset
    int sortStatus = 0;
    unsigned numOfColumns = 10;
    unsigned speedMs = 100;
    unsigned algorithmId = 1;
};

#endif // SORTWINDOW_HPP
