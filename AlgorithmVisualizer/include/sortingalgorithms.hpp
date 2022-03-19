#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include <QtWidgets>

class SortingAlgorithms : public QThread
{

    Q_OBJECT;

public:
    SortingAlgorithms(unsigned numCol, unsigned slow, int algId, std::vector<double> colHeight, QObject* parent);

signals:
    void swapColumns(unsigned col1,unsigned col2);
    void sortEnd();
    void changeColor(unsigned col1, unsigned col2, QColor color);
    void changeColor(unsigned col, QColor color);
    void changeColumn(unsigned col, double height);

private:

    unsigned numOfColumns;
    unsigned speedMs;
    unsigned algorithmId;
    std::vector<double> columnsHeight;

    QColor colColor = QColor("cyan");
    QColor updateColor = QColor("green");
    QColor updateColor2 = QColor("red");
    QColor colColor2 = QColor(0, 110, 54);
    QColor blue = QColor("blue");

    void swap(unsigned n, unsigned k);
    void selectionSort();
    void insertionSort();
    void mergeSort();
    void bubbleSort();
    void bubbleSort(int n);
    void heapSort();
    void heapSort(int n);
    void heapify(int n, int i);
    void quickSort();
    void quickSort(int l, int d);
    void quickSort(int l, int d, QColor colorForUpdate);

protected:
    void run() override;

private slots:
    void changeSpeed(int speed);
};


#endif  // SORTINGALGORITHMS_HPP
