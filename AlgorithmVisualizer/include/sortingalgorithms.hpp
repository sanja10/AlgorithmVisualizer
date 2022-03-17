#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

#include <QtWidgets>

class SortingAlgorithms : public QThread
{

    Q_OBJECT;

public:
    SortingAlgorithms(unsigned numCol, unsigned slow, unsigned algId, std::vector<double> colHeight, QObject* parent);

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
    void swap(unsigned n, unsigned k);
    void selectionSort();

    QColor colColor = QColor("cyan");
    QColor updateColor = QColor("green");
    QColor updateColor2 = QColor("red");
    QColor colColor2 = QColor(0, 110, 54);

protected:
    void run() override;

private slots:
    void changeSpeed(int speed);
};


#endif  // SORTINGALGORITHMS_HPP
