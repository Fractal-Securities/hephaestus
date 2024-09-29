#include <gtest/gtest.h>

#include "Order.h"

TEST(OrderTests, CreateMarketOrder)
{

    // Allocate market Order
    Order marketOrder(OrderType::Market, OrderSide::Buy, 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(marketOrder.getType(), OrderType::Market);
    EXPECT_EQ(marketOrder.getSide(), OrderSide::Buy);
    EXPECT_EQ(marketOrder.getPrice(), 150.05);
    EXPECT_EQ(marketOrder.getQuantity(), 10);

}

TEST(OrderTests, CreateLimitOrder)
{

    // Allocate limit Order
    Order limitOrder(OrderType::Limit, OrderSide::Buy, 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(limitOrder.getType(), OrderType::Limit);
    EXPECT_EQ(limitOrder.getSide(), OrderSide::Buy);
    EXPECT_EQ(limitOrder.getPrice(), 150.05);
    EXPECT_EQ(limitOrder.getQuantity(), 10);

}

TEST(OrderTests, CreateBuyOrder)
{

    // Allocate buy Order
    Order buyOrder(OrderType::Market, OrderSide::Buy, 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(buyOrder.getType(), OrderType::Market);
    EXPECT_EQ(buyOrder.getSide(), OrderSide::Buy);
    EXPECT_EQ(buyOrder.getPrice(), 150.05);
    EXPECT_EQ(buyOrder.getQuantity(), 10);

}

// Test for creating a sell order
TEST(OrderTests, CreateSellOrder)
{

    // Allocate sell Order
    Order sellOrder(OrderType::Market, OrderSide::Sell, 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(sellOrder.getType(), OrderType::Market);
    EXPECT_EQ(sellOrder.getSide(), OrderSide::Sell);
    EXPECT_EQ(sellOrder.getPrice(), 150.05);
    EXPECT_EQ(sellOrder.getQuantity(), 10);

}
