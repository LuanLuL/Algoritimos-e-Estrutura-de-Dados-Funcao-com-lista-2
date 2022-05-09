#ifndef __ITEM_HPP
#define __ITEM_HPP

#include <iostream>
#include <cstring>

using namespace std;

class Item{
	private: 
		int value;
		Item *prox;
		
	public:
		Item();
		Item(int value);
		int getValue();
		void setValue(int value);
		Item* getProx();
		void setProx(Item* newProx);
		bool checkNull();
};
#endif
