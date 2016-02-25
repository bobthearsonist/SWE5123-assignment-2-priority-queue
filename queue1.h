// FILE: queue1.h
// TEMPLATE CLASS PROVIDED: Queue<Item> (a queue of items)
//   The template parameter, Item, is the data type of the items in the Queue.
//   It may be any of the C++ built-in types (int, char, etc.), or a class with
//   a default constructor, a copy constructor, and assignment operator.
//
// MEMBER CONSTANT for the Queue<Item> template class:
//   static const size_t CAPACITY = ____
//     Queue<Item>::CAPACITY is the maximum number of items that a Queue can
//     hold.
//
// CONSTRUCTOR for the Queue<Item> template class:
//   Queue( )
//     Postcondition: The Queue has been initialized as an empty Queue.
//
// MODIFICATION MEMBER FUNCTIONS for the Queue<Item> template class:
//   void insert(const Item& entry)
//     Precondition: size( ) < CAPACITY.
//     Postcondition: A new copy of entry has been inserted at the rear of the
//     Queue.
//
//   Item get_front( )
//     Precondition: size( ) > 0.
//     Postcondition: The front item of the Queue has been popped and returned.
//
// CONSTANT MEMBER FUNCTIONS for the Queue<Item> template class:
//   size_t size( ) const
//     Postcondition: The return value is the total number of items in the Queue.
//
//   bool is_empty( ) const
//     Postcondition: The return value is true if the Queue is empty.
//
// VALUE SEMANTICS for the Queue<Item> template class:
//   Assignments and the copy constructor may be used with Queue<Item> objects.

#ifndef QUEUE1_H     // Prevent duplicate definition
#define QUEUE1_H
#include <stdlib.h> // Provides size_t

    template <class Item>
    class Queue
    {
    public:
        // MEMBER CONSTANTS -- See text for a better alternatives
        enum { CAPACITY = 30 };
        // CONSTRUCTOR
        Queue( );
        // MODIFICATION MEMBER FUNCTIONS
        void insert(const Item& entry);
        Item get_front( );
        // CONSTANT MEMBER FUNCTIONS
        size_t size( ) const { return count; }
        bool is_empty( ) const { return (count == 0); }
    private:
        Item data[CAPACITY];  // Partially-filled array
        size_t front;         // Index of item at front of the queue
        size_t rear;          // Index of item at rear of the queue
        size_t count;         // Total number of items in the queue
        // HELPER MEMBER FUNCTION
        size_t next_index(size_t i) const { return (i+1) % CAPACITY; }
    };

#include "queue1.tem" // Include the implementation
     
#endif

