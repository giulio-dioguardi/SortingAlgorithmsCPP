#include "quicksortalgorithm.h"

QuickSortAlgorithm::QuickSortAlgorithm()
{

}

QuickSortAlgorithm::~QuickSortAlgorithm()
{}

void QuickSortAlgorithm::sort(std::vector<int> *vec)
{
    this->quickSort(vec, vec->begin(), vec->end());
}

template<typename Iter>
void QuickSortAlgorithm::quickSort(std::vector<int> *,  Iter left, Iter right)
{
    auto size = std::distance(left, right);
    if (size <= 1)
        return;

}
