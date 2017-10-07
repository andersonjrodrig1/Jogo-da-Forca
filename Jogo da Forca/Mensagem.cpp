#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Mensagem.h"

using namespace std;

Mensagem::Mensagem() { }

Mensagem::~Mensagem() { }

void Mensagem::mensagemUsuario(string mensagem, string palavraSorte) {
	cout << "\t\t\tBEM VINDO AO JOGO DA FORCA";
	cout << "\n\n\n" << mensagem << "\n\n";
	cout << "Palavra Sorteada: " << palavraSorte;
	cout << "\n\nDeseja jogar novamente, pressione qualquer tecla";
	cout << "\nPara trocar a categoria, pressione 1";
	cout << "\nPara sair, pressione 0";
	cout << "\n\nEscolha uma opcao: ";
}

void Mensagem::mensagemUsuarioOpcao() {
	cout << "\t\t***** Bem vindo ao Jogo da Forca *****\n";
	cout << "\nEscolha uma categoria para iniciar o Jogo:\n";
	cout << "\n1- Frutas";
	cout << "\n2- Verduras";
	cout << "\n3- Bebidas";
	cout << "\n4- Comidas";
	cout << "\n\nEscolha uma opcao: ";
}

void Mensagem::mensagemExcecao(string mensagem) {
	system("cls");
	cout << "\t\t***** Bem vindo ao Jogo da Forca *****\n";
	cout << "\n\n" << mensagem << "\n\n";
	system("pause");
	system("cls");
}