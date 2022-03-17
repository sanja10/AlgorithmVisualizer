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

    void on_startButton_clicked();

private:
    Ui::SortWindow *ui;

    QGraphicsScene *scene;
    QGraphicsView *view;

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
    unsigned algorithmId = 1;

    QColor colColor = QColor("cyan");
    QColor updateColor = QColor("green");

    void draw();
};

#endif // SORTWINDOW_HPP
