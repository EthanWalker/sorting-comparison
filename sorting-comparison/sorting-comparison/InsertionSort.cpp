/*******************************************************************
*   File: InsertionSort.cpp										   *
*   Name: James Walker (Ethan)									   *
*   Project: Programming Assignment 4: Sorting					   *
*   Creation Date: 12/06/2013									   *
*   Purpose: CPP file to define insertion sort					   *
*   															   *
*******************************************************************/
#include "InsertionSort.h"

InsertionSort::InsertionSort()
{

}

InsertionSort::~InsertionSort()
{

}

void InsertionSort::printName()
{
	std::cout << "\n--------------------------------------------------------" << std::endl;
	std::cout << "---------------------INSERTION SORT---------------------" << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
}

void InsertionSort::sort()
{
	for (int i = 1; i < NUMRECS; i++)
	{
		int j = i;
		while (j > 0 && dataArray[(j - 1)].key > dataArray[j].key)
		{
			SortData temp = dataArray[j];
			dataArray[j] = dataArray[(j - 1)];
			dataArray[(j - 1)] = temp;
			j--;
		}
	}
}