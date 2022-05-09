#ifndef LISTA__HPP
#define LISTA__HPP
#include <iostream>
#include <stdlib.h>
#include<locale>
#include "Item.hpp"
#include "MaxSegment.hpp"

using namespace std;

class Lista{
    private:
    	string name; //identifier
    	int maxSize;
    	Item* primeiro;
    	Item* ultimo;
    	MaxSegment segmentMax;
    	
    public:
    	Lista(); //Create List NULL
    	Lista(string name, int maxSize); //Create List empty
    	Lista(string name,  int maxSize, int value); //Create List starting one value
    	string getName();
		void setName(string name);
		int getMaxSize();
		void setMaxSize(int maxSize);
		Item* getPrimeiro();
		void setPrimeiro(Item* primeiro);
		Item* getUltimo();
		void setUltimo(Item* ultimo);
		void getMaxSegment();
		void setMaxSegment(MaxSegment newMaxSegment);
		bool checkEmpty();
		int getSize();
		void insertFinal(int value);
		void printList();
    	void clearList();
    	void searchMaximumSum();
};

#endif
