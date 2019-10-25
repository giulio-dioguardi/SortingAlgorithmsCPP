#include <iostream>
#include "quicksortalgorithm.h"
#include "bubblesortalgorithm.h"
#include <vector>
#include <ctime>

using namespace std;

template <typename T>
T fRand(T fMin, T fMax)
{
    T f = static_cast<T>(rand()) / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

void speedTest(SortingAlgorithm* algorithm, int size)
{
    std::vector<int> vectorInput = {};
    for (auto i = 0 ; i < size; i++)
    {
        vectorInput.push_back(rand() % size);
    }
    clock_t begin = clock();
    algorithm->sort(&vectorInput);
    clock_t end = clock();
    double elapsed_seconds = double(end - begin) / CLOCKS_PER_SEC;
    cout << "Time to sort " << size << " elements, using " << algorithm->toString() << " : " << elapsed_seconds << endl;
    delete(algorithm);
}

int main()
{
    speedTest(new QuickSortAlgorithm(), 2000);
    speedTest(new BubbleSortAlgorithm(), 200);
    speedTest(new QuickSortAlgorithm(), 20000);
    speedTest(new BubbleSortAlgorithm(), 2000);
    speedTest(new QuickSortAlgorithm(), 100000);
    speedTest(new BubbleSortAlgorithm(), 10000);
    speedTest(new QuickSortAlgorithm(), 1000000);
    speedTest(new BubbleSortAlgorithm(), 20000);
    return 0;
}
