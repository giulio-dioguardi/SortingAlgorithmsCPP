#ifndef TST_SORTTEST_H
#define TST_SORTTEST_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../SortingAlgorithms/bubblesortalgorithm.h"
#include "../SortingAlgorithms/quicksortalgorithm.h"
#include <stdlib.h>

using namespace testing;

#define EMPTY_VECTOR(fixture) TEST_F(fixture, emptyVector) \
{ \
    std::vector<int> vectorInput; \
    std::vector<int> vectorExpected = {}; \
    actAndAssert(&vectorInput, &vectorExpected); \
}

#define ONE_ENTRY(fixture) TEST_F(fixture, vectorWithOneEntry) \
{ \
    std::vector<int> vectorInput = { 1 }; \
    std::vector<int> vectorExpected = { 1 }; \
    actAndAssert(&vectorInput, &vectorExpected); \
}

#define TWO_OUT_ORDER(fixture) TEST_F(fixture, vectorWithTwoEntriesOutOfOrder) \
{ \
    std::vector<int> vectorInput = { 2, 1 }; \
    std::vector<int> vectorExpected = { 1 , 2 }; \
    actAndAssert(&vectorInput, &vectorExpected); \
}

#define TWO_IN_ORDER(fixture) TEST_F(fixture, vectorWithTwoEntriesInOrder) \
{ \
    std::vector<int> vectorInput = { 1, 2 }; \
    std::vector<int> vectorExpected = { 1 , 2 }; \
    actAndAssert(&vectorInput, &vectorExpected); \
}

#define THREE_OUT_ORDER(fixture) TEST_F(fixture, vectorWithThreeEntriesOutOfOrder) \
{ \
    std::vector<int> vectorInput = { 3, 1, 2 }; \
    std::vector<int> vectorExpected = { 1, 2, 3 }; \
    actAndAssert(&vectorInput, &vectorExpected); \
}

#define SAME_ELEMENTS(fixture) TEST_F(fixture, vectorWithThreeEntriesWithTwoSameNumbers) \
{ \
    std::vector<int> vectorInput = { 3, 2, 2 }; \
    std::vector<int> vectorExpected = { 2, 2, 3 }; \
    actAndAssert(&vectorInput, &vectorExpected); \
}

#define SPEED_TEST(fixture, testSize) TEST_F(fixture, speedTest) \
{ \
    std::vector<int> vectorInput = {}; \
    size_t size = testSize; \
    for (size_t i = 0 ; i < size; i++) \
    { \
        vectorInput.push_back(rand() % size); \
    } \
    algorithm->sort(&vectorInput); \
    ASSERT_TRUE(std::is_sorted(vectorInput.begin(), vectorInput.end())); \
}


class SortAlgorithmTest : public Test
{
public:
    SortAlgorithmTest()
    {

    }

    SortingAlgorithm* algorithm;
    void SetUp() override
    {
        this->algorithm = nullptr;
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

class BubbleSortAlgorithmTest : public SortAlgorithmTest
{
    void SetUp() override
    {
        algorithm = new BubbleSortAlgorithm();
    }
};

class QuickSortAlgorithmTest : public SortAlgorithmTest
{
    void SetUp() override
    {
        algorithm = new QuickSortAlgorithm();
    }
};

EMPTY_VECTOR(BubbleSortAlgorithmTest);
ONE_ENTRY(BubbleSortAlgorithmTest);
TWO_OUT_ORDER(BubbleSortAlgorithmTest);
TWO_IN_ORDER(BubbleSortAlgorithmTest);
THREE_OUT_ORDER(BubbleSortAlgorithmTest);
SAME_ELEMENTS(BubbleSortAlgorithmTest);
SPEED_TEST(BubbleSortAlgorithmTest, 200);

EMPTY_VECTOR(QuickSortAlgorithmTest);
ONE_ENTRY(QuickSortAlgorithmTest);
TWO_OUT_ORDER(QuickSortAlgorithmTest);
TWO_IN_ORDER(QuickSortAlgorithmTest);
THREE_OUT_ORDER(QuickSortAlgorithmTest);
SAME_ELEMENTS(QuickSortAlgorithmTest);
SPEED_TEST(QuickSortAlgorithmTest, 2000000);

#endif // TST_SORTTEST_H
