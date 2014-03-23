/*******************************************************************
*   File: RadixSort.h											   *
*   Name: James Walker (Ethan)									   *
*   Project: Programming Assignment 4: Sorting					   *
*   Creation Date: 12/06/2013									   *
*   Purpose: H file to define radix sort						   *
*   															   *
*******************************************************************/
#ifndef RADIXSORT_H
#define RADIXSORT_H

#include "Sort.h"

#define RADIX 10

class RadixSort : public Sort
{
public:
	RadixSort();
	~RadixSort();

protected:
	virtual void sort();
	virtual void printName();
	void populateHitList(int powerOf10);
	void populateProxArray();
	void populateLocalArray(int powerOf10);

	SortData localArray[NUMRECS];
	int hitList[RADIX];
	int proxArray[RADIX];
};

#endif RADIXSORT_H