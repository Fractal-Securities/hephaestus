#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include "Order.h"

#include "PriorityQueue.h"

enum class SIDE : uint8_t
{

    BUY = 1,

    SELL = 2

};

//template <typename Side>
class OrderBook
{

public:

    OrderBook(SIDE s);

    PriorityQueue<Order, std::function<bool(const Order&, const Order&)>> book;

    void addOrder(const Order&);

private:

    static bool buyCompare(const Order& a, const Order& b);
    static bool sellCompare(const Order& a, const Order& b);

};

#include "OrderBook.tpp"

#endif /* ORDERBOOK_H */
