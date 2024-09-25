#include "../include/Order.h"

// Order Constructor
Order::Order(Order::OrderType type, const std::string& s, double p, int q)
{

    orderType = type;

    orderSide = s;

    price = p;

    quantity = q;

}

// Order's Type Accessor
Order::OrderType Order::getType() const
{

    return orderType;

}

// Order's Side Accessor
std::string Order::getSide() const
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