#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H

#include <vector>
#include <string>

class SortingAlgorithm
{
public:
    SortingAlgorithm();
    virtual ~SortingAlgorithm();
    //template<typename T> T* sort(T* inputarray);
    virtual void sort(std::vector<int>* vec) = 0;
    virtual void sort(std::vector<double>* vec) = 0;
    virtual std::string toString();
};

#endif // SORTINGALGORITHM_H
