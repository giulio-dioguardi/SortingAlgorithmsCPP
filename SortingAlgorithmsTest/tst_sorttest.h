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
    SortingAlgorithm* algorithm;
    void SetUp() override
    {
        this->algorithm = new BubbleSortAlgorithm();
    }

    void TearDown() override
    {
        delete(this->algorithm);
    }
};


TEST_F(BubbleSortAlgorithmTest, emptyVector)
{
    std::vector<int> array;
    algorithm->sort(&array);
    ASSERT_EQ(array, std::vector<int>());
}

TEST_F(BubbleSortAlgorithmTest, vectorWithOneEntry)
{
    std::vector<int> vectorInput = { 1 };
    std::vector<int> vectorExpected = { 1 };
    algorithm->sort(&vectorInput);
    ASSERT_EQ(vectorInput, vectorExpected);
}

TEST_F(BubbleSortAlgorithmTest, vectorWithTwoEntriesOutOfOrder)
{
    std::vector<int> vectorInput = { 2, 1 };
    std::vector<int> vectorExpected = { 1 , 2 };
    algorithm->sort(&vectorInput);
    ASSERT_EQ(vectorInput, vectorExpected);
}


#endif // TST_SORTTEST_H
