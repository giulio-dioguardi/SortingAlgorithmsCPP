#ifndef QUICKSORTALGORITHM_H
#define QUICKSORTALGORITHM_H

#include "sortingalgorithm.h"

class QuickSortAlgorithm : public SortingAlgorithm
{
public:
    QuickSortAlgorithm();
    virtual ~QuickSortAlgorithm() override;
    virtual void sort(std::vector<int>* inputarray) override;
};

#endif // QUICKSORTALGORITHM_H
