#include "MaxSegment.hpp"

MaxSegment::MaxSegment(){
	this->start = -1;
	this->final = -1;
	this->soma = -1;
}

MaxSegment::MaxSegment(int start, int final, int soma){
	this->start = start;
	this->final = final;
	this->soma = soma;
}

int MaxSegment::getStart(){
	return this->start;
}

void MaxSegment::setStart(int start){
	this->start = start;
}

int MaxSegment::getFinal(){
	return this->final;
}

void MaxSegment::setFinal(int final){
	this->final = final;
	
}
int MaxSegment::getSoma(){
	return this->soma;
}

void MaxSegment::setSoma(int soma){
	this->soma = soma;
}
