#include "../include/Order.h"

// Order Constructor
Order::Order(const std::string& type, const std::string& side, double p, int q)
{

    orderType = type;

    orderSide = side;

    price = p;

    quantity = q;

}

// Order's Type Accessor
std::string Order::getType() const
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