/*******************************************************************
*   File: BubbleSort.h											   *
*   Name: James Walker (Ethan)									   *
*   Project: Programming Assignment 4: Sorting					   *
*   Creation Date: 12/06/2013									   *
*   Purpose: H file to define bubble sort						   *
*   															   *
*******************************************************************/
#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "Sort.h"

class BubbleSort : public Sort
{
	SortData temp;
	
public:
	BubbleSort();
	~BubbleSort();
protected:
	virtual void sort(); 
	virtual void printName();


};

#endif BUBBLESORT_H