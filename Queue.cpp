#include "Queue.h"

Queue::Queue() : head(0), size(0)
{
	
}

Queue::~Queue()
{

}

void Queue::push(Sort::SortData sortData)
{
	int tail = head+size;	//    (don't forget to wrap around if needed) ???
	if(tail >= (NUMRECS) && head == 0)
	{
		return;
	}
	
	dataArray[tail] = sortData;
	size++;

	
	
	
	
}


Sort::SortData* Queue::pop()
{
	if(isEmpty()){return NULL;}
	size--;

	if(head == (NUMRECS-1))
	{
		head = 0;
	}
	else 
	{
		head++;
	}

	return &dataArray[head]; 
//    - update head to head+1 (or 0, if head is at end of array)

}

Sort::SortData Queue::peek()
{
	return dataArray[head];
}

bool Queue::isEmpty()
{
	if(size == 0){return true;}

	return false;
}