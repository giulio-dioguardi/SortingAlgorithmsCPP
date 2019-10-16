#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H

#include <vector>

class SortingAlgorithm
{
public:
    SortingAlgorithm();
    //template<typename T> T* sort(T* inputarray);
    std::vector<int> sort(std::vector<int> inputarray);
};

#endif // SORTINGALGORITHM_H
