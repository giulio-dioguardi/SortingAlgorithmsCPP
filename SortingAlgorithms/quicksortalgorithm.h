#ifndef QUICKSORTALGORITHM_H
#define QUICKSORTALGORITHM_H

#include "sortingalgorithm.h"

class QuickSortAlgorithm : public SortingAlgorithm
{
public:
    QuickSortAlgorithm();
    virtual ~QuickSortAlgorithm() override;
    virtual void sort(std::vector<int>* vec) override;
    template<typename Iter>
    void quickSort(std::vector<int>& vec, Iter left, Iter right);
};

#endif // QUICKSORTALGORITHM_H
