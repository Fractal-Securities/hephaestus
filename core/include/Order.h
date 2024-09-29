#ifndef ORDER_H
#define ORDER_H

#include <string>

// The type of order
enum class OrderType : uint8_t
{

    Market = 1,

    Limit = 2

};

enum class OrderSide : uint8_t
{

    Buy = 1,

    Sell = 2

};

class Order
{

public:

    // Order constructor
    Order(OrderType Type, OrderSide OrderSide, double p, int q);

    // Order's Type Accessor
    OrderType getType() const;

    // Order's OrderSide Accessor
    OrderSide getSide() const;

    // Order's Price Accessor
    double getPrice() const;

    // Order's Quantity Accessor
    int getQuantity() const;

    // The Order's price
    double price;

    // The Order's time stamp
    int64_t time;

private:

    // The Order's type
    OrderType orderType;

    // The Order's OrderSide
    OrderSide orderSide;

    // The Order's volume to be traded
    int quantity;
    
};

#include "Order.tpp"

#endif /* ORDER_H */