/*******************************************************************
*   File: QuickSort.h											   *
*   Name: James Walker (Ethan)									   *
*   Project: Programming Assignment 4: Sorting					   *
*   Creation Date: 12/06/2013									   *
*   Purpose: H define Quick Sort	 							   *
*   															   *
*******************************************************************/
#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"

class QuickSort : public Sort
{
public:
	QuickSort();
	~QuickSort();
	int sortCount = 0;
	
private:
	virtual void sort(int startIndex, int endIndex);
	void partition(SortData DataArray[], int *I, int *J);

protected:
	virtual void sort();
	virtual void printName();


};

#endif QUICKSORT_H