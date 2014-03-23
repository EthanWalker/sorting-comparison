/*******************************************************************
*   File: main.cpp												   *
*   Name: James Walker (Ethan)									   *
*   Project: Programming Assignment 4: Sorting					   *
*   Creation Date: 12/06/2013									   *
*   Purpose: CPP file to run sorts	 							   *
*   															   *
*******************************************************************/

#include <iostream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "InsertionSort.h"
#include "RadixSort.h"
#include "ProxMap.h"

int main()
{
	BubbleSort		*bsort = new BubbleSort();
	QuickSort		*qsort = new QuickSort();
	InsertionSort	*isort = new InsertionSort();
	RadixSort		*rsort = new RadixSort();
	ProxMap			*psort = new ProxMap();

	bsort->timeSort();
	qsort->timeSort();
	isort->timeSort();
	rsort->timeSort();
	psort->timeSort();

	

	std::cin.get();
	delete bsort;
	delete qsort;
	delete isort;
	delete rsort;
	delete psort;
	return 0;
}