#ifndef ORDER_H
#define ORDER_H

#include <string>

// The type of order
enum class OrderType : uint8_t
{

    Market = 1,

    Limit = 2,

};


template <typename TYPE, typename SIDE>
class Order
{

public:

    // Order constructor
    constexpr Order(TYPE Type, SIDE side, double p, int q);

    // Order's Type Accessor
    constexpr TYPE getType() const;

    // Order's Side Accessor
    constexpr SIDE getSide() const;

    // Order's Price Accessor
    double getPrice() const;

    // Order's Quantity Accessor
    int getQuantity() const;

private:

    // The Order's type
    TYPE orderType;

    // The Order's side
    SIDE orderSide;

    // The Order's price
    double price;

    // The Order's volume to be traded
    int quantity;
    
    // The Order's time stamp
    long orderTime;

};

#include "Order.tpp"

#endif /* ORDER_H */