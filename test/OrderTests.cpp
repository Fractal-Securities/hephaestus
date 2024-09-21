#include <gtest/gtest.h>

#include <gtest/gtest.h>

#include "../core/include/Order.h"

// Test for creating a buy order
TEST(OrderTest, CreateBuyOrder)
{

    // Allocate buy Order
    Order buyOrder("Market", "buy", 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(buyOrder.getType(), "Market");
    EXPECT_EQ(buyOrder.getSide(), "buy");
    EXPECT_EQ(buyOrder.getPrice(), 150.05);
    EXPECT_EQ(buyOrder.getQuantity(), 10);

}

// Test for creating a sell order
TEST(OrderTest, CreateSellOrder)
{

    // Allocate sell Order
    Order sellOrder("Market", "sell", 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(sellOrder.getType(), "Market");
    EXPECT_EQ(sellOrder.getSide(), "sell");
    EXPECT_EQ(sellOrder.getPrice(), 150.05);
    EXPECT_EQ(sellOrder.getQuantity(), 10);

}

