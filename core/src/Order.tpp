#include "../include/Order.h"

// Order Constructor
template <typename TYPE, typename SIDE>
constexpr Order<TYPE, SIDE>::Order(TYPE type, SIDE side, double p, int q)
    : orderType(type), orderSide(side)
{

    price = p;

    quantity = q;

}

// Order's Type Accessor
template <typename TYPE, typename SIDE>
constexpr TYPE Order<TYPE, SIDE>::getType() const
{

    return orderType;

}

// Order's Side Accessor
template <typename TYPE, typename SIDE>
constexpr SIDE Order<TYPE, SIDE>::getSide() const
{

    return orderSide;

}

// Order's Price Accessor
template <typename TYPE, typename SIDE>
double Order<TYPE, SIDE>::getPrice() const
{

    return price;

}

// Order's Quantity Accessor
template <typename TYPE, typename SIDE>
int Order<TYPE, SIDE>::getQuantity() const
{

    return quantity;

}