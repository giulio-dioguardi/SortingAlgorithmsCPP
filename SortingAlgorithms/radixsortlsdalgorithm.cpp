#include "radixsortlsdalgorithm.h"

RadixSortLSDAlgorithm::RadixSortLSDAlgorithm()
{}

RadixSortLSDAlgorithm::~RadixSortLSDAlgorithm()
{}

void RadixSortLSDAlgorithm::sort(std::vector<int> *vec)
{
    this->radixSortLSD(*vec);
}

void RadixSortLSDAlgorithm::sort(std::vector<double> *vec)
{
    return;
}

std::string RadixSortLSDAlgorithm::toString()
{
    return "Radix LSD Sort";
}

void RadixSortLSDAlgorithm::radixSortLSD(std::vector<int> &vec)
{
    radixSortLSD(vec, 10);
}

void RadixSortLSDAlgorithm::radixSortLSD(std::vector<int> &vec, int radix)
{
    if (vec.size() == 0)
        return;

    //Determine minimum and maximum values
    int minValue = vec.at(0);
    int maxValue = vec.at(0);
    for (size_t i = 1; i < vec.size(); i++)
    {
        if (vec.at(i) < minValue)
        {
            minValue = vec.at(i);
        }
        else if (vec.at(i) > maxValue)
        {
            maxValue = vec.at(i);
        }
    }

    //Perform counting sort on each exponent/digit, starting from the least significant
    int exponent = 1;
    while ((maxValue - minValue) / exponent >= 1)
    {
        this->countingSortByDigit(vec, radix, exponent, minValue);
        exponent *= radix;
    }
}

void RadixSortLSDAlgorithm::countingSortByDigit(std::vector<int> &vec, int radix, int exponent, int minValue)
{
    int bucketIndex;
    int buckets[radix];
    int output [vec.size()];

    //Initialize bucket
    for (int i = 0; i < radix ; i++)
    {
        buckets[i] = 0;
    }

    //Count frequencies
    for (size_t i = 0; i < vec.size(); i++)
    {
        bucketIndex = (int)(((vec.at(i) - minValue) / exponent) % radix);
        buckets[bucketIndex]++;
    }

    //Compute cumulates
    for (int i = 1; i < radix; i++)
    {
        buckets[i] += buckets[i - 1];
    }

    //Move records
    for (int i = vec.size() - 1; i >=0; i--)
    {
        bucketIndex = (int)(((vec.at(i) - minValue) / exponent) % radix);
        output[--buckets[bucketIndex]] = vec.at(i);
    }

    for (size_t i = 0 ; i < vec.size(); i++)
    {
        vec.at(i) = output[i];
    }

}
