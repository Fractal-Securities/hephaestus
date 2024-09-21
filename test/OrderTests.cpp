#include <gtest/gtest.h>

#include "../core/include/Order.h"

TEST(OrderTest, CreateBuyOrder)
{

    // Allocate buy Order
    Order buyOrder("buy", 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(buyOrder.getType(), "buy");
    EXPECT_EQ(buyOrder.getPrice(), 150.05);
    EXPECT_EQ(buyOrder.getQuantity(), 10);

}

TEST(OrderTest, CreateSellOrder)
{

    // Allocate sell Order
    Order sellOrder("sell", 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(sellOrder.getType(), "sell");
    EXPECT_EQ(sellOrder.getPrice(), 150.05);
    EXPECT_EQ(sellOrder.getQuantity(), 10);

}