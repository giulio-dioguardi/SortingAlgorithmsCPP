#ifndef QUICKSORTALGORITHM_H
#define QUICKSORTALGORITHM_H

#include "sortingalgorithm.h"

class QuickSortAlgorithm : public SortingAlgorithm
{
public:
    QuickSortAlgorithm();
    virtual ~QuickSortAlgorithm() override;
    virtual void sort(std::vector<int>* vec) override;
    virtual void sort(std::vector<double> *vec) override;
    virtual std::string toString() override;
private:
    template<typename T, typename Iter>
    void quickSort(std::vector<T>& vec, Iter left, Iter right);
};

#endif // QUICKSORTALGORITHM_H
