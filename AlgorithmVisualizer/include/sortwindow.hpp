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
    void on_listWidget_currentRowChanged(int currentRow);
    void on_fastSortButton_clicked();

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

    QString selectionAlg = "test";
    QString insertionAlg = "test";
    QString quickAlg = "test";
    QString bubbleAlg = "test";
    QString heapAlg = "test";
    QString shellAlg = "test";
    std::vector<std::pair<QString,QString>> algInformation =
        {std::pair("Selection sort", "Complexity: quadratic \n In each step the smallest of the remaining elements of the array is brought to the current place"),
         std::pair("Insertion sort", "Complexity: quadratic \n Sorts the array by taking one element of the array one by one, and inserting it in the appropirate place in the sorted array that stores the final result"),
         std::pair("Shell sort", "Complexity: quadratic"),
         std::pair("Quick sort", "Worst case complexity: quadratic\n Average case complexity: O(nlogn) \n It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot \n The sub-arrays are then sorted recursively."),
         std::pair("Bubble sort", "Complexity: quadratic \n we compare two-by-two elements and change their places if they are not arranged as required, until we reach the sorted part of the array, when we start the process from the beginning"),
         std::pair("Heap sort", "Complexity: O(nlogn) \n It is similar to selection sort where we first find the maximum element  and place the maximum element at the end. We repeat the same process for remaining element.")
        };

    QColor colColor = QColor("cyan");
    QColor updateColor = QColor("green");

    void draw();
    void testSwap(unsigned col1, unsigned col2);
    void initAlgorithms();
};

#endif // SORTWINDOW_HPP
