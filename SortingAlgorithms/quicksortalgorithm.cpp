#include "quicksortalgorithm.h"

QuickSortAlgorithm::QuickSortAlgorithm()
{

}

QuickSortAlgorithm::~QuickSortAlgorithm()
{}

void QuickSortAlgorithm::sort(std::vector<int> *vec)
{
    this->quickSort(*vec, vec->begin(), vec->end());
}

template<typename Iter>
void QuickSortAlgorithm::quickSort(std::vector<int> & vec,  Iter left, Iter right)
{
    auto size = std::distance(left, right);
    if (size <= 1)
        return;

    auto pivot = std::next(right, -1);
    if (size == 2 && *pivot < *left) {
        std::iter_swap(left, pivot);
    }

    auto wall = left;
    auto curr = left;

    while (curr != right)
    {
        if (*curr < *pivot)
        {
            std::iter_swap(wall, curr);
            wall++;
        }
        curr++;
    }
    std::iter_swap(pivot, wall);
    quickSort(vec, left, wall);
    quickSort(vec, wall + 1, right);
}
