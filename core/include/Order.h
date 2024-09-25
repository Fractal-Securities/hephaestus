#ifndef ORDER_H
#define ORDER_H

#include <string>

class Order
{

public:

    // The type of order
    enum class OrderType
    {

        Market,

        Limit,

    };

    // Order constructor
    Order(const OrderType oType, const std::string& s, double p, int q);

    // Order's Type Accessor
    OrderType getType() const;

    // Order's Side Accessor
    std::string getSide() const;

    // Order's Price Accessor
    double getPrice() const;

    // Order's Quantity Accessor
    int getQuantity() const;

private:

    // The Order's type
    OrderType orderType;

    // The Order's side
    std::string orderSide;

    // The Order's price
    double price;

    // The Order's volume to be traded
    int quantity;

};

#endif /* ORDER_H */