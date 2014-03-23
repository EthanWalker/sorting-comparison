/*******************************************************************
*   File: InsertionSort.h										   *
*   Name: James Walker (Ethan)									   *
*   Project: Programming Assignment 4: Sorting					   *
*   Creation Date: 12/06/2013									   *
*   Purpose: H file to define insertion sort					   *
*   															   *
*******************************************************************/
#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include "Sort.h"

class InsertionSort : public Sort
{
public:
	InsertionSort();
	~InsertionSort();
protected:
	virtual void sort();
	virtual void printName();
};

#endif INSERTIONSORT_H