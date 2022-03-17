#include "include/sortingalgorithms.hpp"
#include "iostream"
#include <QThread>

SortingAlgorithms::SortingAlgorithms(unsigned numCol, unsigned slow, unsigned algId,std::vector<double> colHeight, QObject* parent = nullptr)
        :QThread(parent)
{
    numOfColumns = numCol;
    speedMs = slow;
    columnsHeight = colHeight;
    algorithmId = algId;
}

void SortingAlgorithms::swap(unsigned n, unsigned k)
{
    std::swap(columnsHeight[n], columnsHeight[k]);
    emit swapColumns(n, k);
}


void SortingAlgorithms::run()
{
    selectionSort();
}

// in each step the smallest of the remaining elements of the array is brought to the current place
void SortingAlgorithms::selectionSort()
{
    for (auto i = 0; i < numOfColumns-1; i++)
    {
        auto minIdx = i;
        // red color - for this position find the smallest of the remaining elements
        emit changeColor(minIdx, updateColor2);
        msleep(speedMs);
        for (auto j = i+1; j < numOfColumns; j++)
        {
            if (columnsHeight[j] < columnsHeight[minIdx]) {
                minIdx = j;
                //emit changeColor(j, minIdx, updateColor);
                //msleep(speedMs+10);
                //emit changeColor(j, minIdx, colColor2);
            }

        }

        // swap element on position i with found element
        swap(i, minIdx);
        // change their color to green
        emit changeColor(i, minIdx, updateColor);
        msleep(speedMs+10);
        // change color to regular color
        emit changeColor(minIdx, colColor);

        // change color to sortDone
        emit changeColor(i, colColor2);

    }
    emit changeColor(numOfColumns-1, colColor2);

}

void SortingAlgorithms::changeSpeed(int speed)
{
    speedMs = speed;
}

