#include "bubblesortalgorithm.h"

BubbleSortAlgorithm::BubbleSortAlgorithm()
{

}

BubbleSortAlgorithm::~BubbleSortAlgorithm()
{}

std::string BubbleSortAlgorithm::toString()
{
    return "Bubble Sort";
}

void BubbleSortAlgorithm::sort(std::vector<int> *vec)
{
    this->bubbleSort(vec);
}

void BubbleSortAlgorithm::sort(std::vector<double> *vec)
{
    this->bubbleSort(vec);
}

template <typename T>
void BubbleSortAlgorithm::bubbleSort(std::vector<T>* vec)
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
