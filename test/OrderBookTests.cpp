#include <gtest/gtest.h>

#include "OrderBook.h"

TEST(OrderBookTests, CreateOrderBook)
{

    OrderBook buyBook(SIDE::BUY);

    Order buyOrder(OrderType::Market, OrderSide::Buy, 150.00, 10);

    buyBook.addOrder(buyOrder);


}