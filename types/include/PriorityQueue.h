#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <vector>

#include <functional>

template <typename T, typename COMPARE = std::less<T>>
class PriorityQueue
{

public:

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
    COMPARE comp;

    // Method for handling value insertion
    void Up(T value);

    // Method for handling value deletion
    void Down(T value);

};

#endif /* PRIORITY_QUEUE_H */