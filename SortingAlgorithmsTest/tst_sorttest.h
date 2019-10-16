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

    void actAndAssert(std::vector<int>* input, std::vector<int>* output)
    {
        algorithm->sort(input);
        EXPECT_EQ(*input, *output);
    }
};


TEST_F(BubbleSortAlgorithmTest, emptyVector)
{
    std::vector<int> vectorInput;
    std::vector<int> vectorExpected = {};
    actAndAssert(&vectorInput, &vectorExpected);
}

TEST_F(BubbleSortAlgorithmTest, vectorWithOneEntry)
{
    std::vector<int> vectorInput = { 1 };
    std::vector<int> vectorExpected = { 1 };
    actAndAssert(&vectorInput, &vectorExpected);
}

TEST_F(BubbleSortAlgorithmTest, vectorWithTwoEntriesOutOfOrder)
{
    std::vector<int> vectorInput = { 2, 1 };
    std::vector<int> vectorExpected = { 1 , 2 };
    actAndAssert(&vectorInput, &vectorExpected);
}


#endif // TST_SORTTEST_H
