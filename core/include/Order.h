#ifndef ORDER_H
#define ORDER_H

#include <string>

class Order
{

public:

    // Order constructor
    Order(const std::string& t, double p, int q);

    // Order's Type Accessor
    std::string getType() const;

    // Order's Price Accessor
    double getPrice() const;

    // Order's Quantity Accessor
    int getQuantity() const;

private:

    // The Order's type
    std::string orderType;

    // The Order's price
    double price;

    // The Order's volume to be traded
    int quantity;

};

#endif /* ORDER_H */