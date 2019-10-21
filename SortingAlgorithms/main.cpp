#include <iostream>
#include "quicksortalgorithm.h"
#include "bubblesortalgorithm.h"
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    SortingAlgorithm* algorithm = new BubbleSortAlgorithm();
    std::vector<double> vectorInput = {};
    size_t size = 24444;
    for (size_t i = 0 ; i < size; i++)
    {
        vectorInput.push_back(rand() % size);
    }
    clock_t begin = clock();
    algorithm->sort(&vectorInput);
    clock_t end = clock();
    double elapsed_seconds = double(end - begin) / CLOCKS_PER_SEC;
    cout << "Time to sort " << size << " elements, using " << algorithm->toString() << " : " << elapsed_seconds << endl;
    return 0;
}
