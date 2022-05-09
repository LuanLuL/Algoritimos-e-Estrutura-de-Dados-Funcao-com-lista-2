#include <iostream>
#include <locale>
#include <fstream>
#include "Lista.hpp"
#include "Item.hpp"

using namespace std;

int main() {
	
	system("chcp 1252");
	setlocale(LC_ALL, "Portuguese");
	
	int tam;
	cout << "\nDigite o tamanho da lista: ";
	cin >> tam;
	
	string file;
	cout << "\nDigite o nome do arquivo onde a lista se encontra: ";
	cin >> file;
	
	ifstream inFile(file.c_str());
	
	if(!inFile){
		cerr << "\nERRO...ERRO...N�o foi poss�vel abrir o arquivo...ERRO...ERRO\n\nSaindo...\n";
		return -1;
	}

	Lista listA("A", tam);
	int value;

	while(!inFile.eof()){
		inFile >> value;
		listA.insertFinal(value);
	}

	inFile.close();

	int op;

	do{
		cout << "\n1 - Imprimir lista\n2 - Calcular soma máxima\n3 - Apresentar soma máxima\n4 - Sair\n\nEscolha uma opção: ";
		cin >> op;
	
		switch (op){
			case 1:
			{
				listA.printList();
				break;
			}
			case 2:
			{
				listA.searchMaximumSum();
				break;
			}
			case 3:
			{
				listA.getMaxSegment();
				break;
			}
			case 4:
			{
				cout << "\nSaindo...\n\n";
				break;
			}
			default: 
			{
				cerr << "\n\nERRO...ERRO...Opção inválida...ERRO...ERRO\n\n------------------------------------------\n";
			}
		}
	
	}while(op != 4);
	
	return 0;
}