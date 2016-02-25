#ifndef QUEUE_PRIORITY_QUEUE
#define QUEUE_PRIORITY_QUEUE

#include "queue1.h"
#include "d_except.h"

const int MAXPRIORITY = 10;

template <typename T>
class pqqueue
{
	public:
		pqqueue();	//default constructor

		void push(const T& item);
			// insert item with priority p, derived from the item somehow.
			// 0 <= p <= MAXPRIORITY
			// Postcondition: the queue has one more element

		void push(const T& item, int p);
			// insert item with priority p
			// 0 <= p <= MAXPRIORITY
			// Postcondition: the queue has one more element

		void pop();
			// find the non-empty queue with largest index and remove
			// its front element
			// Precondition: the queue is not empty. the function
			// can throw the underflowError exception if the queue is empty
			// void pop() throw ( underflowError )

		T& top();
			// find the non-empty queue with largest index and return
			// its front element
			// Precondition: the queue is not empty. the function
			// can throw the underflowError exception if the queue is empty
			// T& top() throw ( underflowError )

		const T& top() const;
			// constant version of top()

		bool empty() const;
			// is the queue empty?
		int size() const;
			// return the number of elements in the queue

	private:
		Queue<T> priority [ MAXPRIORITY ];
			// priority[i] contains all elements with priority i
			// in the their order of insertion
		int pqsize;
			// number of elements in the priority queue across all queues
};


// create an empty priority queue
template <typename T>
pqqueue<T>::pqqueue()
{
	// ADD YOUR LOGIC HERE
	// you need to allocate space for the vector
	// and initialize the number of elements
};

template <typename T>
void pqqueue<T>::push(const T& item)
{
	// ADD YOUR LOGIC HERE
	// push item into queue priority[p] where p is derived somehow
	// or defaulted and increment priority queue size
};


template <typename T>
void pqqueue<T>::push(const T& item, int p)
{
	// ADD YOUR LOGIC HERE
	// push item into queue priority[p] and increment priority queue size
};

template <typename T>
void pqqueue<T>::pop()
{
	int i = MAXPRIORITY;

	// ADD YOUR LOGIC HERE
	//  if the priority queue is not empty
	// find a nonempty queue in the range
	// priority[MAXPRIORITY] down to priority[0]
	// pop priority[i] and decrement priority queue size
};

template <typename T>
T& pqqueue<T>::top()
{
	int i = MAXPRIORITY;

	// ADD YOUR LOGIC HERE
	// same logic as pop, only return item
};

template <typename T>
const T& pqqueue<T>::top() const
{
	int i = MAXPRIORITY;

	// ADD YOUR LOGIC HERE
	// same logic as non const top
};

template <typename T>
bool pqqueue<T>::empty() const
{
	// ADD YOUR LOGIC HERE
	// determine if priority queue is empty
};

template <typename T>
int pqqueue<T>::size() const
{
	return pqsize;
}

#endif	// QUEUE_PRIORITY_QUEUE
