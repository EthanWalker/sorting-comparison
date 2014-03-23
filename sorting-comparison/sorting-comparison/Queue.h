#ifndef QUEUE_H
#define QUEUE_H

#include "Sort.h"


class Queue
{
public:
	Queue();
	~Queue();
	int head;
	int size;
private:
	void push(Sort::SortData sortData);
	Sort::SortData* pop();
	Sort::SortData peek();
	Sort::SortData dataArray[NUMRECS];
	bool isEmpty();
	
	
};
#endif QUEUE_H

