#include <gtest/gtest.h>

#include "../core/include/Order.h"

TEST(OrderTests, CreateMarketOrder)
{

    // Allocate market Order
    Order<OrderType, const char*> marketOrder(OrderType::Market, "buy", 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(marketOrder.getType(), OrderType::Market);
    EXPECT_EQ(marketOrder.getSide(), "buy");
    EXPECT_EQ(marketOrder.getPrice(), 150.05);
    EXPECT_EQ(marketOrder.getQuantity(), 10);

}

TEST(OrderTests, CreateLimitOrder)
{

    // Allocate limit Order
    Order<OrderType, const char*> limitOrder(OrderType::Limit, "buy", 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(limitOrder.getType(), OrderType::Limit);
    EXPECT_EQ(limitOrder.getSide(), "buy");
    EXPECT_EQ(limitOrder.getPrice(), 150.05);
    EXPECT_EQ(limitOrder.getQuantity(), 10);

}

TEST(OrderTests, CreateBuyOrder)
{

    // Allocate buy Order
    Order<OrderType, const char*> buyOrder(OrderType::Market, "buy", 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(buyOrder.getType(), OrderType::Market);
    EXPECT_EQ(buyOrder.getSide(), "buy");
    EXPECT_EQ(buyOrder.getPrice(), 150.05);
    EXPECT_EQ(buyOrder.getQuantity(), 10);

}

// Test for creating a sell order
TEST(OrderTests, CreateSellOrder)
{

    // Allocate sell Order
    Order<OrderType, const char*> sellOrder(OrderType::Market, "sell", 150.05, 10);

    // Verify Order values are set
    EXPECT_EQ(sellOrder.getType(), OrderType::Market);
    EXPECT_EQ(sellOrder.getSide(), "sell");
    EXPECT_EQ(sellOrder.getPrice(), 150.05);
    EXPECT_EQ(sellOrder.getQuantity(), 10);

}
