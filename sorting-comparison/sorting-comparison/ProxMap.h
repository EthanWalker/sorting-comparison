/*******************************************************************
*   File: ProxMap.h												   *
*   Name: James Walker (Ethan)									   *
*   Project: Programming Assignment 4: Sorting					   *
*   Creation Date: 12/06/2013									   *
*   Purpose: H file to define ProxMap Sort						   *
*   															   *
*******************************************************************/
#ifndef PROXMAP_H
#define PROXMAP_H

#include "Sort.h"

#define NUMBUCKETS 5000

class ProxMap : public Sort
{
public:
	ProxMap();
	~ProxMap();
protected:
	virtual void sort();
	virtual void printName();

private:
	int hitList[NUMBUCKETS];
	int proxArray[NUMBUCKETS];
	SortData localArray[NUMRECS];
	bool hasData[NUMRECS];
	int hash(int key);
	void populateHitList();
	void populateProxArray();
	void insert(SortData sdata, int index);
};

#endif PROXMAP_H