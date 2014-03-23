#include "Sort.h"

Sort:: Sort()  
{
	SortData dataArray[NUMRECS] = {0};
	size = 0;

}

Sort::~Sort()
{
	delete[] dataArray;
}

void Sort::readFile()
{
	std::ifstream inFile;
	inFile.open("SortData.txt");
	
	while(!inFile.eof() && size < NUMRECS) 
	{
		
		SortData *newStruct = new SortData();
		inFile >> newStruct->key >> newStruct->strData >> newStruct->numData;
		dataArray[size] = *newStruct;
		size++;
		delete newStruct;
	}


}

void Sort::printTenStructs()
{
	for(int i = NUMRECS-1; i > NUMRECS-150; i--)
	{
		std::cout << "NUMBER " << (i+1) << ": " << dataArray[i].key << " " <<  dataArray[i].strData << " " <<  dataArray[i].numData << std::endl;
	}
}

 void Sort::sort()
 {

 }

 void Sort::printName()
 {
 
 }
bool Sort::isSorted()
{
	for(int i = 0; i < (size-1); i++)
	{
		if(dataArray[i].key > dataArray[i+1].key )
		{
			return false;
		}
	}
	return true;
}

void Sort::timeSort()
{
	MicroSecondTimer *timer = new MicroSecondTimer();
	readFile();
	printName();
	timer->Start();
	sort();
	timer->Stop();
	//printTenStructs();
	if (isSorted())
	{
		std::cout << "SORTED: TRUE" << std::endl;
	}
	else
	{
		std::cout << "SORTED: FALSE" << std::endl;
	}
	std::cout << "RUN TIME: " << timer->getTime() << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
	delete timer;
}