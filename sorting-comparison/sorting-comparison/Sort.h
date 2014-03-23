#ifndef SORT_H
#define SORT_H

#include <fstream>
#include <iostream>
#include "MicroSecondTimer.h"

#define NUMRECS 10000

class Sort
{
public:
	struct SortData
	{
		int     key;
		char    strData[5];
		double  numData;
	};
	virtual void sort() = 0;
	virtual void printName() = 0;
	SortData dataArray[NUMRECS]; 
	int size;



public:
	 Sort();
	~ Sort();
	
	void readFile();
	bool isSorted();
	void timeSort();
	void printTenStructs();

	friend class Queue;
};

#endif



