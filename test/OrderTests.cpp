#include <gtest/gtest.h>

#include <gtest/gtest.h>

#include "../core/include/Order.h"

TEST(OrderTest, CreateMarketOrder)
{

    // Allocate market Order
    Order marketOrder(Order::OrderType::Market, "buy", 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(marketOrder.getType(), Order::OrderType::Market);
    EXPECT_EQ(marketOrder.getSide(), "buy");
    EXPECT_EQ(marketOrder.getPrice(), 150.05);
    EXPECT_EQ(marketOrder.getQuantity(), 10);

}

TEST(OrderTest, CreateLimitOrder)
{

    // Allocate limit Order
    Order limitOrder(Order::OrderType::Limit, "buy", 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(limitOrder.getType(), Order::OrderType::Limit);
    EXPECT_EQ(limitOrder.getSide(), "buy");
    EXPECT_EQ(limitOrder.getPrice(), 150.05);
    EXPECT_EQ(limitOrder.getQuantity(), 10);

}

TEST(OrderTest, CreateBuyOrder)
{

    // Allocate buy Order
    Order buyOrder(Order::OrderType::Market, "buy", 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(buyOrder.getType(), Order::OrderType::Market);
    EXPECT_EQ(buyOrder.getSide(), "buy");
    EXPECT_EQ(buyOrder.getPrice(), 150.05);
    EXPECT_EQ(buyOrder.getQuantity(), 10);

}

// Test for creating a sell order
TEST(OrderTest, CreateSellOrder)
{

    // Allocate sell Order
    Order sellOrder(Order::OrderType::Market, "sell", 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(sellOrder.getType(), Order::OrderType::Market);
    EXPECT_EQ(sellOrder.getSide(), "sell");
    EXPECT_EQ(sellOrder.getPrice(), 150.05);
    EXPECT_EQ(sellOrder.getQuantity(), 10);

}
