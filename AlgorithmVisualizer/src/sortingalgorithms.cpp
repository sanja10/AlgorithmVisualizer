#include "include/sortingalgorithms.hpp"
#include "iostream"
#include <QThread>

SortingAlgorithms::SortingAlgorithms(unsigned numCol, unsigned slow, int algId,std::vector<double> colHeight, QObject* parent = nullptr)
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
    switch(algorithmId)
    {
    case 0:
        selectionSort();
        break;
    case 1:
        insertionSort();
        break;
    case 2:
        mergeSort();
        break;
    case 3:
        quickSort();
        break;
    case 4:
        bubbleSort();
        break;
    case 5:
        heapSort();
        break;
    default:
        selectionSort();
    }
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

void SortingAlgorithms::quickSort()
{
    // quickSort(0, numOfColumns-1, updateColor);
    quickSort(0, numOfColumns-1);
}

void SortingAlgorithms::insertionSort()
{

}

void SortingAlgorithms::mergeSort()
{

}


void SortingAlgorithms::heapSort()
{
    heapSort(numOfColumns);
}

void SortingAlgorithms::bubbleSort()
{

}

void SortingAlgorithms::quickSort(int l, int d)
{
    int i,k;

    // if array has only one element - do nothing
    if (l >= d)
        return;

    // element on position l is pivot
    swap(l, (l+d)/2);
    k = l;
    // color pivot with red
    emit changeColor(l, updateColor2);

    // partition
    for(i = l + 1; i <= d; i++)
    {
        //if element is smaller than pivot, change his position
        if (columnsHeight[i] < columnsHeight[l]) {

             emit changeColor(k+1,updateColor);
             emit changeColor(i, blue);
             msleep(speedMs+10);
             swap(++k, i);
             emit changeColor(k, i, colColor);

        }

    }
    //emit changeColor(k, l, updateColor2);
    msleep(speedMs+10);
    // put the pivot in his position

    swap(l,k);
    emit changeColor(k, colColor);
    msleep(speedMs+10);
    emit changeColor(l, colColor);

    // everyone to the left of the pivot are less  or equal than him
    // quickSort elements left of the pivot
    quickSort(l, k-1);

    // everyone to the left of the pivot is bigger than him
    // quickSort elemnts right of the pivot
    quickSort(k+1, d);
}

void SortingAlgorithms::quickSort(int l, int d, QColor colorForUpdate)
{
    int i,k;

    if (l >= d)
        return;

    swap(l, (l+d)/2);
    k = l;
    emit changeColor(l, updateColor2);
    for(i = l + 1; i <= d; i++)
    {
        if (columnsHeight[i] < columnsHeight[l]) {
             emit changeColor(k+1,colorForUpdate);
             emit changeColor(i, blue);
             msleep(speedMs+10);
             swap(++k, i);
             emit changeColor(k, i, colColor);

        }

    }
    msleep(speedMs+10);
    swap(l,k);
    emit changeColor(k, colColor);
    msleep(speedMs+10);
    emit changeColor(l, colColor);
    msleep(speedMs+10);
    quickSort(l, k-1, colColor2);
    quickSort(k+1, d, updateColor);
}

void SortingAlgorithms::heapify(int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n) {
        if (columnsHeight[left] > columnsHeight[largest])
            largest = left;
    }

    if (right < n) {
        if(columnsHeight[right] > columnsHeight[largest])
            largest = right;
    }


    if (largest != i) {
      emit changeColor(i, largest, blue);
      msleep(speedMs);
      swap(i, largest);
      emit changeColor(i, largest, colColor);
      msleep(speedMs);
      heapify(n, largest);
    }
}

void SortingAlgorithms::heapSort(int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
      heapify(n, i);
    }

    for (int i = n - 1; i > 0; i--) {
      emit changeColor(0, i, updateColor);
      msleep(speedMs);
      swap(0, i);
      emit changeColor(0, updateColor2);
      emit changeColor(i, colColor);
      msleep(speedMs);
      heapify(i, 0);
      emit changeColor(0, colColor);
      msleep(speedMs);
    }
}

//void SortingAlgorithms::quickSort(int low, int high, QColor color)
//{
//    if (low < high)
//    {
//        int pivot = partition(low, high);
//        quickSort(low, pivot-1, colColor);
//        quickSort(pivot+1, high, colColor);
//    }
//}

//int SortingAlgorithms::partition(int low, int high)
//{
//    int pivot = columnsHeight[high];
//    int i = low - 1;

//    for (int j = low; j <= high-1; j++)
//    {
//        if (columnsHeight[j] <= pivot)
//        {
//            i++;
//            swap(columnsHeight[i], columnsHeight[j]);
//        }
//    }
//    swap(columnsHeight[i+1], columnsHeight[high]);

//    return i+1;
//}

void SortingAlgorithms::changeSpeed(int speed)
{
    speedMs = speed;
}

