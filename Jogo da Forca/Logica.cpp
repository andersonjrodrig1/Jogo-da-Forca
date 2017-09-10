#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Logica.h"

using namespace std;

Logica::Logica() { }

Logica::~Logica() { }

int Logica::validaLetraDigitada(char letra[], char letrasDigitadas[]) {
	int i;
	for (i = 0; i < strlen(letrasDigitadas); i++) {
		if (letra == letrasDigitadas[i])
			return 1;
	}

	return 0;
}

char Logica::*consultaBanco(int indice, int cdCategoria) {
	char palavra[15];

	switch (cdCategoria) {
	case 1:
		strcpy(palavra, frutas[indice]);
		break;
	case 2:
		strcpy(palavra, verduras[indice]);
		break;
	case 3:
		strcpy(palavra, bebidas[indice]);
		break;
	case 4:
		strcpy(palavra, comidas[indice]);
		break;
	default:
		system("cls");
		printf("\n\nFalha ao sortear a palavra\n\n");
		system("pause");
		break;
	}

	return palavra;
}

char Logica::*buscarDicaPalavra(int cdCategoria) {
	char retorno[20];

	switch (cdCategoria) {
	case 1:
		strcpy(retorno, "E uma fruta com");
		break;
	case 2:
		strcpy(retorno, "E uma verdura com");
		break;
	case 3:
		strcpy(retorno, "E uma bebida com");
		break;
	case 4:
		strcpy(retorno, "E uma comida com");
		break;
	default:
		system("cls");
		printf("\n\nFalha ao buscar dica\n\n");
		system("pause");
		break;
	}

	return retorno;
}

int Logica::validaCategoria(char *op) {
	int cdCategoria;

	switch (op[0]) {
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

char Logica::*buscarCategoria(int cdCategoria) {
	char nmCategoria[20];
	switch (cdCategoria) {
	case 1:
		strcpy(nmCategoria, "Frutas");
		break;
	case 2:
		strcpy(nmCategoria, "Verduras");
		break;
	case 3:
		strcpy(nmCategoria, "Bebidas");
		break;
	case 4:
		strcpy(nmCategoria, "Comidas");
		break;
	default:
		strcpy(nmCategoria, "");
		break;
	}

	return nmCategoria;
}

int Logica::buscarTamanhoBanco(int cdCategoria) {
	int tamBanco = 0;
	switch (cdCategoria) {
	case 1:
		tamBanco = sizeof(frutas) / sizeof(int);
		break;
	case 2:
		tamBanco = sizeof(verduras) / sizeof(int);
		break;
	case 3:
		tamBanco = sizeof(bebidas) / sizeof(int);
		break;
	case 4:
		tamBanco = sizeof(comidas) / sizeof(int);
		break;
	default:
		tamBanco = 0;
		break;
	}

	return tamBanco;
}