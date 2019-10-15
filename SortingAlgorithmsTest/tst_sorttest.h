#ifndef TST_SORTTEST_H
#define TST_SORTTEST_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../SortingAlgorithms/sortingalgorithm.h"

using namespace testing;

TEST(SortingAlgorithmTest, SortTestNullPtr)
{
    SortingAlgorithm* algorithm = new SortingAlgorithm();
    int array[1];
    ASSERT_EQ(algorithm->sort(array), nullptr);
}

#endif // TST_SORTTEST_H
