#include "../include/Order.h"

// Order Constructor
Order::Order(const std::string& t, double p, int q)
{

    orderType = t;

    price = p;

    quantity = q;

}

// Order's Type Accessor
std::string Order::getType() const
{

    return orderType;

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