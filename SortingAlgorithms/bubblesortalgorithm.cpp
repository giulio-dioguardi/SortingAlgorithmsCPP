#include "bubblesortalgorithm.h"

BubbleSortAlgorithm::BubbleSortAlgorithm()
{

}

BubbleSortAlgorithm::~BubbleSortAlgorithm()
{}

//template <typename T> T* SortingAlgorithm::sort(T* inputarray)
void BubbleSortAlgorithm::sort(std::vector<int>* inputarray)
{
    if (inputarray->size() == 1)
    {
        return;
    }
    else if (inputarray->size() == 2)
    {
        std::iter_swap(inputarray->begin(), inputarray->begin() + 1);
    }
}
