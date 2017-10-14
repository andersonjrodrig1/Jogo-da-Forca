#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Logica.h"

using namespace std;

const string frutas[] = { "manga","banana","maca","melao","caqui","pera","melancia","abacaxi","limao" };
const string verduras[] = { "alface","cebola","jilo","beterraba","batata","quiabo","abobora","batata doce","milho" };
const string bebidas[] = { "agua","cafe","suco","guarana","cerveja","pinga" };
const string comidas[] = { "arroz","feijao","macarrao","frango","carne bovina","carne de porco" };

Logica::Logica() { }

Logica::~Logica() { }

bool Logica::validaLetraDigitada(char letra, string letrasDigitadas) {
	for (int i = 0; i < letrasDigitadas.length(); i++) {
		if (letra == letrasDigitadas[i])
			return true;
	}

	return false;
}

string Logica::consultaBanco(int indice, int cdCategoria) {
	string palavra;

	switch (cdCategoria) {
	case 1:
		palavra = frutas[indice];
		break;
	case 2:
		palavra = verduras[indice];
		break;
	case 3:
		palavra = bebidas[indice];
		break;
	case 4:
		palavra = comidas[indice];
		break;
	default:
		system("cls");
		printf("\n\nFalha ao sortear a palavra\n\n");
		system("pause");
		break;
	}

	return palavra;
}

string Logica::buscarDicaPalavra(int cdCategoria) {
	string retorno;

	switch (cdCategoria) {
	case 1:
		retorno = "E uma fruta com";
		break;
	case 2:
		retorno = "E uma verdura com";
		break;
	case 3:
		retorno =  "E uma bebida com";
		break;
	case 4:
		retorno =  "E uma comida com";
		break;
	default:
		system("cls");
		printf("\n\nFalha ao buscar dica\n\n");
		system("pause");
		break;
	}

	return retorno;
}

int Logica::validaCategoria(char op) {
	int cdCategoria;

	switch (op) {
	case '1':
		cdCategoria = 1;
		break;
	case '2':
		cdCategoria = 2;
		break;
	case '3':
		cdCategoria = 3;
		break;
	case '4':
		cdCategoria = 4;
		break;
	default:
		cdCategoria = 0;
		break;
	}

	return cdCategoria;
}

string Logica::buscarCategoria(int cdCategoria) {
	string nmCategoria;
	switch (cdCategoria) {
	case 1:
		nmCategoria ="Frutas";
		break;
	case 2:
		nmCategoria = "Verduras";
		break;
	case 3:
		nmCategoria = "Bebidas";
		break;
	case 4:
		nmCategoria = "Comidas";
		break;
	default:
		nmCategoria = "";
		break;
	}

	return nmCategoria;
}

int Logica::buscarTamanhoBanco(int cdCategoria) {
	int tamBanco = 0;
	switch (cdCategoria) {
	case 1:
		tamBanco = sizeof(frutas) / sizeof(string);
		break;
	case 2:
		tamBanco = sizeof(verduras) / sizeof(string);
		break;
	case 3:
		tamBanco = sizeof(bebidas) / sizeof(string);
		break;
	case 4:
		tamBanco = sizeof(comidas) / sizeof(string);
		break;
	default:
		tamBanco = 0;
		break;
	}

	return tamBanco;
}