#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H

#include <vector>

class SortingAlgorithm
{
public:
    SortingAlgorithm();
    virtual ~SortingAlgorithm();
    //template<typename T> T* sort(T* inputarray);
    virtual void sort(std::vector<int>* inputarray) = 0;

};

#endif // SORTINGALGORITHM_H
