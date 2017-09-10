#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Mensagem.h"

using namespace std;

Mensagem::Mensagem() { }

Mensagem::~Mensagem() { }

void Mensagem::mostraForca(char palavraSorte[], char dica[], char nmCategoria[], int chances) {
	cout << "\t\t************* JOGO DA FORCA **************";
	cout << "\n\nDICA: %s %d LETRAS.", strupr(dica), strlen(palavraSorte);
	cout << "\n\nCHANCES: %d", chances;
	cout << "\n\nPALAVRA: ";
}

void Mensagem::mensagemUsuario(char *mensagem, char palavraSorte[]) {
	cout << "\t\t\tBEM VINDO AO JOGO DA FORCA";
	cout << "\n\n\n%s\n\n", mensagem;
	cout << "Palavra Sorteada: %s", palavraSorte;
	cout << "\n\nDeseja jogar novamente, pressione qualquer tecla";
	cout << "\nPara trocar a categoria, pressione 1";
	cout << "\nPara sair, pressione 0";
	cout << "\n\nEscolha uma opcao: ";
}

void Mensagem::mensagemExcecao(char *mensagem) {
	system("cls");
	cout << "\t\t***** Bem vindo ao Jogo da Forca *****\n";
	cout << "\n\n%s\n\n", mensagem;
	system("pause");
	system("cls");
}