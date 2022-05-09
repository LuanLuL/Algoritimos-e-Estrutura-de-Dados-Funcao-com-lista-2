#include "Lista.hpp"

Lista::Lista(){
	this->name = "";
	this->maxSize = -1;
	this->primeiro = NULL;
	this->ultimo = NULL;
}

Lista::Lista(string name, int maxSize){
	this->name = name;
	this->maxSize = maxSize;
	this->primeiro = NULL;
	this->ultimo = NULL;
}

Lista::Lista(string name, int maxSize, int value){
	this->name = name;
	this->maxSize = maxSize;
	this->primeiro = new Item(value);
	this->ultimo = primeiro;
}

string Lista::getName(){
	return this->name;
}

void Lista::setName(string name){
	this->name = name;
}

int Lista::getMaxSize(){
	return this->maxSize;
}

void Lista::setMaxSize(int maxSize){
	this->maxSize = maxSize;
}

Item* Lista::getPrimeiro(){
	return this->primeiro;
}

void Lista::setPrimeiro(Item* primeiro){
	this->primeiro = primeiro;
}

Item* Lista::getUltimo(){
	return this->ultimo;
}

void Lista::setUltimo(Item* ultimo){
	this->ultimo = ultimo;
}

void Lista::getMaxSegment(){
	Item* aux = this->primeiro;
	int i = 0;
	
	cout << "\nA máxima soma encontrada foi: [ ";
	
	do{
		if(i >= this->segmentMax.getStart()){
			if(this->segmentMax.getSoma() == 0){
				cout << "Ø ] = " << this->segmentMax.getSoma();
				i = this->segmentMax.getFinal();
			}
			else if(i == this->segmentMax.getFinal()){
				cout << aux->getValue() << " ] = " << this->segmentMax.getSoma();
			}
			else{
				cout << aux->getValue() << ", ";
			}	
		}
		
		i++;
		aux = aux->getProx();
	}while(i <= this->segmentMax.getFinal());
	
	cout << "\n\n------------------------------------------\n";
}

void Lista::setMaxSegment(MaxSegment newMaxSegment){
	this->segmentMax = newMaxSegment;
}


bool Lista::checkEmpty(){
	return (this->primeiro == NULL);
}

int Lista::getSize(){
	if(checkEmpty()){
		return 0;
	}
	
	Item* aux = primeiro;
	int size = 0;
	
	do{
		size++;		
		aux = aux->getProx();
	}while(aux != NULL);
	
	return size;
}

void Lista::insertFinal(int value){
	Item* newItem = new Item(value);
	
	if(getSize() >= this->maxSize){
		cout << "\n\nERRO...ERRO...A lista " << this->name << " está cheia...ERRO...ERRO\n\n";
	}
	else{
		if(checkEmpty()){
			this->primeiro = newItem;
			this->ultimo = newItem;
		}
		else{
			this->ultimo->setProx(newItem);
			this->ultimo = newItem;
		}
	}
}

void Lista::printList(){
	if(checkEmpty()){
		cout << "\nA lista " << this->name << " está vazia.";
	}
	else{
		Item* aux = this->primeiro;
		
		cout << "\nLista - " << this->name << "\n\n"  << "[ ";
		
		do{
			if(!(aux->checkNull())){
				if(aux->getProx() == NULL){
					cout << aux->getValue() << " ]";
				}
				else{
					
				cout << aux->getValue() << ", ";
				}
			}	
				
			aux = aux->getProx();
		}while(aux != NULL);
	}

	cout << "\n\n------------------------------------------\n";
}

void Lista::clearList(){
	Item* aux = this->primeiro->getProx();

	do{
		free(this->primeiro);
		this->primeiro = aux;
		aux = this->primeiro->getProx();
	}while(primeiro != ultimo);
	
	free(this->primeiro);
	this->primeiro = NULL;
	this->ultimo = NULL;
}

void Lista::searchMaximumSum(){
    int start = 0, final = 0, soma=0;
	Item* auxFinal = this->primeiro;
	
	this->segmentMax.setStart(0);
	this->segmentMax.setFinal(0);
	this->segmentMax.setSoma(0);
	
	do{
		if(soma >=0){
			soma += auxFinal->getValue();
		}
		else{
			soma = auxFinal->getValue();
			start = final;
		}
		
		if(soma > this->segmentMax.getSoma()){
			this->segmentMax.setSoma(soma);
			this->segmentMax.setStart(start);
			this->segmentMax.setFinal(final);
		}
		else if(soma < 0){
			this->segmentMax.setSoma(0);
			this->segmentMax.setStart(-1);
			this->segmentMax.setFinal(-1);		
		}

		auxFinal = auxFinal->getProx();
		final++;
	}while(auxFinal != NULL);
	
	cout << "\n----->Soma máxima calculada!\n\n------------------------------------------\n";
}
