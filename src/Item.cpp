#include "Item.hpp"

Item::Item(){
	this->value = -1;
	this->prox = NULL;
}

Item::Item(int value){
	this->value = value;
	this->prox = NULL;
}

int Item::getValue(){
	return this->value;
}

void Item::setValue(int value){
	this->value = value;
}

Item* Item::getProx(){
	return this->prox;
}

void Item::setProx(Item* prox){
	this->prox = prox;
}

bool Item::checkNull(){
	bool boolReturn = false;
	
	if(this->value == -1){
		boolReturn = true;
	}
	return boolReturn;
}
