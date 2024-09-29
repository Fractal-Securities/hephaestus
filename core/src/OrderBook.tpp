#include "OrderBook.h"

OrderBook::OrderBook(SIDE s)
{

    if (s == SIDE::BUY)
        book = PriorityQueue<Order, std::function<bool(const Order&, const Order&)>>(buyCompare);

    else
        book = PriorityQueue<Order, std::function<bool(const Order&, const Order&)>>(sellCompare);
 
}

void OrderBook::addOrder(const Order& order)
{

    book.push(order);

}

bool OrderBook::buyCompare(const Order& a, const Order& b)
{

    return a.price < b.price && a.time < b.time;

}

bool OrderBook::sellCompare(const Order& a, const Order& b)
{

    return a.price > b.price && a.time < b.time;

}