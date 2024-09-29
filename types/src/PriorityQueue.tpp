#include "PriorityQueue.h"

template <typename T, typename C>
PriorityQueue<T, C>::PriorityQueue()
    : heap(), compare(C())
{

    std::make_heap(heap.begin(), heap.end(), compare);

    hSize = 0;

}

template <typename T, typename C>
PriorityQueue<T, C>::PriorityQueue(C compare)
    : heap(), compare(compare)
{

    std::make_heap(heap.begin(), heap.end(), compare);

    hSize = 0;

}

template <typename T, typename C>
const std::vector<T>& PriorityQueue<T, C>::getHeap() const
{

    // Return the heap
    return heap;

}

template <typename T, typename C>
void PriorityQueue<T, C>::push(const T& value) 
{

    // Insert the value into the heap
    heap.push_back(value);

    // Heapify the vector back into the proper heap
    std::push_heap(heap.begin(), heap.end(), compare);

    // Increment the heap size
    ++hSize;

}

template <typename T, typename C>
T PriorityQueue<T, C>::pop() 
{

    T top = -1;

    if (hSize <= 0)
        return top;

    top = heap[0];

    std::pop_heap(heap.begin(), heap.end(), compare);

    heap.pop_back();

    --hSize;

    return top;

}

template <typename T, typename C>
T PriorityQueue<T, C>::top() const
{

    T top = -1;

    if (hSize <= 0)
        return top;

    return heap[0];

}

template <typename T, typename C>
bool PriorityQueue<T, C>::isEmpty() const
{

    return hSize == 0;

}