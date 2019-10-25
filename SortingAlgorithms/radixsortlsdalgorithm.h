#ifndef RADIXSORTLSDALGORITHM_H
#define RADIXSORTLSDALGORITHM_H

#include "sortingalgorithm.h"

class RadixSortLSDAlgorithm : public SortingAlgorithm
{
public:
    RadixSortLSDAlgorithm();
    virtual ~RadixSortLSDAlgorithm() override;
    virtual void sort(std::vector<int> *vec) override;
    virtual void sort(std::vector<double> *vec) override;
    virtual std::string toString() override;
private:
    void radixSortLSD(std::vector<int>& vec);
    void radixSortLSD(std::vector<int>& vec, int radix);
    void countingSortByDigit(std::vector<int>& vec, int radix, int exponent, int minValue);
};

#endif // RADIXSORTLSDALGORITHM_H
