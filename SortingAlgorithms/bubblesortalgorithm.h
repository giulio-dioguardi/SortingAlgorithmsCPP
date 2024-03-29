#ifndef BUBBLESORTALGORIGHM_H
#define BUBBLESORTALGORIGHM_H

#include "sortingalgorithm.h"

class BubbleSortAlgorithm : public SortingAlgorithm
{
public:
    BubbleSortAlgorithm();
    virtual ~BubbleSortAlgorithm() override;
    virtual void sort(std::vector<int>* vec) override;
};

#endif // BUBBLESORTALGORIGHM_H
