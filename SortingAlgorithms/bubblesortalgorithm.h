#ifndef BUBBLESORTALGORIGHM_H
#define BUBBLESORTALGORIGHM_H

#include "sortingalgorithm.h"

class BubbleSortAlgorithm : public SortingAlgorithm
{
public:
    BubbleSortAlgorithm();
    virtual ~BubbleSortAlgorithm() override;
    virtual void sort(std::vector<int>* vec) override;
    virtual void sort(std::vector<double> *vec) override;
    virtual std::string toString() override;
private:
    template<typename T>
    void bubbleSort(std::vector<T>* vec);
};

#endif // BUBBLESORTALGORIGHM_H
