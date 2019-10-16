#include "bubblesortalgorithm.h"

BubbleSortAlgorithm::BubbleSortAlgorithm()
{

}

BubbleSortAlgorithm::~BubbleSortAlgorithm()
{}

//template <typename T> T* SortingAlgorithm::sort(T* inputarray)
void BubbleSortAlgorithm::sort(std::vector<int>* inputarray)
{
    if (inputarray->size() < 2)
    {
        return;
    }

    for (size_t i = 0; i < inputarray->size(); i++)
    {
        for (size_t j = i; j < inputarray->size(); j++)
        {
            if (inputarray->at(i) > inputarray->at(j))
            {
                std::swap(inputarray->at(i), inputarray->at(j));
            }
        }
    }
}
