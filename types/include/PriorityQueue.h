#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <vector>

#include <functional>

template <typename T, typename C>
class PriorityQueue
{

public:

    // PriorityQueue constructor
    PriorityQueue();
    PriorityQueue(C compare);

    // Heap accessor method
    const std::vector<T>& getHeap() const;

    // Method for inserting value
    void push(const T& value);

    // Method for getting and removing value
    T pop();

    // Method for getting the root value
    T top() const;

    // Method for determing if queue is empty
    bool isEmpty() const;

private:

    // The heap for the data
    std::vector<T> heap;

    // The comparison function
    C compare;

    // The heap's size
    ssize_t hSize;

};

#include "PriorityQueue.tpp"

#endif /* PRIORITY_QUEUE_H */