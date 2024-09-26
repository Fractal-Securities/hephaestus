#include "PriorityQueue.h"

template <typename T, typename Compare>
PriorityQueue<T, Compare>::PriorityQueue()
    : heap(), comp(Compare())
{

    std::make_heap(heap.begin(), heap.end(), comp);

    hSize = 0;

}


template <typename T, typename Compare>
const std::vector<T>& PriorityQueue<T, Compare>::getHeap() const
{

    // Return the heap
    return heap;

}

template <typename T, typename Compare>
void PriorityQueue<T, Compare>::push(const T& value) 
{

    // Insert the value into the heap
    heap.push_back(value);

    // Heapify the vector back into the proper heap
    std::push_heap(heap.begin(), heap.end(), comp);

    // Increment the heap size
    ++hSize;

}

template <typename T, typename Compare>
T PriorityQueue<T, Compare>::pop() 
{

    T top = -1;

    if (hSize <= 0)
        return top;

    top = heap[0];

    std::pop_heap(heap.begin(), heap.end(), comp);

    heap.pop_back();

    --hSize;

    return top;

}

template <typename T, typename Compare>
T PriorityQueue<T, Compare>::top() const
{

    T top = -1;

    if (hSize <= 0)
        return top;

    return heap[0];

}

template <typename T, typename Compare>
bool PriorityQueue<T, Compare>::isEmpty() const
{

    return hSize == 0;

}