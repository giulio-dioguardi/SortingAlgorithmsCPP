#include "quicksortalgorithm.h"

QuickSortAlgorithm::QuickSortAlgorithm()
{

}

QuickSortAlgorithm::~QuickSortAlgorithm()
{}

void QuickSortAlgorithm::sort(std::vector<int> *inputarray)
{
    this->quickSort(inputarray, inputarray->begin(), inputarray->end());
}

template<typename Iter>
void QuickSortAlgorithm::quickSort(std::vector<int> *,  Iter left, Iter right)
{
    auto size = std::distance(left, right);
    if (size <= 1)
        return;

}
