#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Montagem.h"

using namespace std;

Montagem::Montagem() { }

Montagem::~Montagem() { }

void Montagem::mostraForca(char palavraSorte[], char dica[], char nmCategoria[], int chances) {
	cout << "\t\t************* JOGO DA FORCA **************";
	cout << "\n\nDICA: " << strupr(dica) << " LETRAS " << strlen(palavraSorte);
	cout << "\n\nCHANCES: " << chances;
	cout << "\n\nPALAVRA: ";
}

void Montagem::montaForca(int erro) {
	switch (erro) {
	case 0:
		cout << "\n\n|--------|";
		cout << "\n|\t |";
		cout << "\n|";
		cout << "\n|";
		cout << "\n|";
		cout << "\n|";
		cout << "\n----\n\n";
		break;
	case 1:
		cout << "\n\n|--------|";
		cout << "\n|\t |";
		cout << "\n|";
		cout << "\t O";
		cout << "\n|";
		cout << "\n|";
		cout << "\n|";
		cout << "\n----\n\n";
		break;
	case 2:
		cout << "\n\n|--------|";
		cout << "\n|\t |";
		cout << "\n|";
		cout << "\t O";
		cout << "\n|";
		cout << "\t/";
		cout << "\n|";
		cout << "\n|";
		cout << "\n----\n\n";
		break;
	case 3:
		cout << "\n\n|--------|";
		cout << "\n|\t |";
		cout << "\n|";
		cout << "\t O";
		cout << "\n|";
		cout << "\t/";
		cout << "|";
		cout << "\n|";
		cout << "\n|";
		cout << "\n----\n\n";
		break;
	case 4:
		cout << "\n\n|--------|";
		cout << "\n|\t |";
		cout << "\n|";
		cout << "\t O";
		cout << "\n|";
		cout << "\t/";
		cout << "|";
		cout << "\\";
		cout << "\n|";
		cout << "\n|";
		cout << "\n----\n\n";
		break;
	case 5:
		cout << "\n\n|--------|";
		cout << "\n|\t |";
		cout << "\n|";
		cout << "\t O";
		cout << "\n|";
		cout << "\t/";
		cout << "|";
		cout << "\\";
		cout << "\n|";
		cout << "\t/";
		cout << "\n|";
		cout << "\n----\n\n";
		break;
	case 6:
		cout << "\n\n|--------|";
		cout << "\n|\t |";
		cout << "\n|";
		cout << "\t O";
		cout << "\n|";
		cout << "\t/";
		cout << "|";
		cout << "\\";
		cout << "\n|";
		cout << "\t/";
		cout << " \\";
		cout << "\n|";
		cout << "\n----\n\n";
		break;
	default:
		system("cls");
		cout << "\n\nFalha ao montar a forca\n\n";
		system("pause");
		break;
	}
}
