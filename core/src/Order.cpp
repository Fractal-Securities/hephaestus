#include "Order.h"

#include <chrono>

// Order Constructor
Order::Order(OrderType type, OrderSide side, double p, int q)
    : orderType(type), orderSide(side)
{

    time = (int64_t)std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    price = p;

    quantity = q;

}

// Order's Type Accessor
OrderType Order::getType() const
{

    return orderType;

}

// Order's Side Accessor
OrderSide Order::getSide() const
{

    return orderSide;

}

// Order's Price Accessor
double Order::getPrice() const
{

    return price;

}

// Order's Quantity Accessor
int Order::getQuantity() const
{

    return quantity;

}