#ifndef TST_SORTTEST_H
#define TST_SORTTEST_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../SortingAlgorithms/bubblesortalgorithm.h"

using namespace testing;

class BubbleSortAlgorithmTest : public Test
{
public:
    BubbleSortAlgorithmTest() {}
};


TEST_F(BubbleSortAlgorithmTest, emptyVector)
{
    BubbleSortAlgorithm* algorithm = new BubbleSortAlgorithm();
    std::vector<int> array;
    ASSERT_EQ(algorithm->sort(array), std::vector<int>());
}

TEST_F(BubbleSortAlgorithmTest, vectorWithOneEntry)
{
    BubbleSortAlgorithm* algorithm = new BubbleSortAlgorithm();
    std::vector<int> vectorInput = { 1 };
    std::vector<int> vectorExpected = { 1 };
    ASSERT_EQ(algorithm->sort(vectorInput), vectorExpected);
}



#endif // TST_SORTTEST_H
