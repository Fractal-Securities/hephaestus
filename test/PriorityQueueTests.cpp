#include <gtest/gtest.h>

#include "../types/include/PriorityQueue.h"

TEST(PriorityQueueTests, PushValuesBid)
{

    std::vector<double> testList = {150.05, 150.00};

    PriorityQueue<double, std::less<double>> bidBook;

    bidBook.push(150.00);
    bidBook.push(150.05);

    ASSERT_EQ(testList, bidBook.getHeap());

}

TEST(PriorityQueueTests, PopValuesBid)
{

    std::vector<double> testList = {150.00};

    PriorityQueue<double, std::less<double>> bidBook;

    bidBook.push(150.00);
    bidBook.push(150.05);

    double val = bidBook.pop();

    ASSERT_EQ(150.05, val);
    ASSERT_EQ(testList, bidBook.getHeap());

}

TEST(PriorityQueueTests, PushValuesAsk)
{

    std::vector<double> testList = {150.00, 150.05};

    PriorityQueue<double, std::greater<double>> askBook;

    askBook.push(150.00);
    askBook.push(150.05);

    ASSERT_EQ(testList, askBook.getHeap());

}

TEST(PriorityQueueTests, PopValuesAsk)
{

    std::vector<double> testList = {150.05};

    PriorityQueue<double, std::greater<double>> askBook;

    askBook.push(150.00);
    askBook.push(150.05);

    askBook.pop();

    ASSERT_EQ(testList, askBook.getHeap());

}