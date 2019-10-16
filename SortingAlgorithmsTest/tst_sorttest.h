#ifndef TST_SORTTEST_H
#define TST_SORTTEST_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../SortingAlgorithms/sortingalgorithm.h"

using namespace testing;

TEST(SortingAlgorithmTest, SortTestEmptyVector)
{
    SortingAlgorithm* algorithm = new SortingAlgorithm();
    std::vector<int> array;
    ASSERT_EQ(algorithm->sort(array), std::vector<int>());
}

#endif // TST_SORTTEST_H
