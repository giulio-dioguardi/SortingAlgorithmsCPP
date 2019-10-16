#include "bubblesortalgorithm.h"

BubbleSortAlgorithm::BubbleSortAlgorithm()
{

}

BubbleSortAlgorithm::~BubbleSortAlgorithm()
{}

//template <typename T> T* SortingAlgorithm::sort(T* inputarray)
void BubbleSortAlgorithm::sort(std::vector<int>* vec)
{
    if (vec->size() < 2)
    {
        return;
    }

    for (size_t i = 0; i < vec->size(); i++)
    {
        for (size_t j = i; j < vec->size(); j++)
        {
            if (vec->at(i) > vec->at(j))
            {
                std::swap(vec->at(i), vec->at(j));
            }
        }
    }
}
