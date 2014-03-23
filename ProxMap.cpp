/*******************************************************************
*   File: ProxMap.cpp											   *
*   Name: James Walker (Ethan)									   *
*   Project: Programming Assignment 4: Sorting					   *
*   Creation Date: 12/06/2013									   *
*   Purpose: CPP file to define ProxMap Sort					   *
*   															   *
*******************************************************************/
#include"ProxMap.h"


ProxMap::ProxMap()
{
	for (int i = 0; i < NUMBUCKETS; i++)
	{
		hitList[i] = 0;
	}
	
	for (int i = 0; i < NUMRECS; i++)
	{
		hasData[i] = 0;
	}
	

	proxArray[0] = 0;
}

ProxMap::~ProxMap()
{

}

int ProxMap::hash(int key)
{
	return (key * NUMBUCKETS)/33000;
}

void ProxMap::populateHitList()
{
	int digit;
	for (int i = 0; i < size; i++)
	{
		digit = hash(dataArray[i].key);
		hitList[digit] = hitList[digit]++;

	}
}

void ProxMap::sort()
{
	populateHitList();
	populateProxArray();

	for (int i = 0; i < size; i++)
	{
		int index = proxArray[hash(dataArray[i].key)];
		insert(dataArray[i], index);
	}

	for (int i = 0; i < size; i++)
	{
		dataArray[i] = localArray[i];
	}
}

void ProxMap::populateProxArray()
{
	for(int i = 1; i < NUMBUCKETS; i++)
	{
		proxArray[i] = proxArray[(i - 1)] + hitList[(i - 1)];
	}
}

void ProxMap::printName()
{
	std::cout << "\n--------------------------------------------------------" << std::endl;
	std::cout << "-----------------------PROXMAP SORT---------------------" << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
}

void ProxMap::insert(SortData sdata, int index)
{
	SortData temp;

	while (hasData[index])
	{
		if (sdata.key < localArray[index].key)
		{
			temp = localArray[index];
			localArray[index] = sdata;
			sdata = temp;
		}
	
		index++;
	}

	localArray[index] = sdata;
	hasData[index] = true;
}