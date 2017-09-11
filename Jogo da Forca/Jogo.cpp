#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include "Jogo.h"
#include "Mensagem.h"
#include "Montagem.h"
#include "Logica.h"

using namespace std;

Jogo::Jogo() { }

Jogo::~Jogo() { }

void Jogo::iniciarJogo() {
	Logica logica;
	Mensagem mensagem;
	char op[1];

	mensagem.mensagemUsuarioOpcao();

	scanf("%c", &op);

	int cdCategoria = logica.validaCategoria(op);

	if (cdCategoria > 0) {
		Jogo::forca(cdCategoria);
	}
	else {
		mensagem.mensagemExcecao("Opcao invalida. Tente novamente!");
		Jogo::iniciarJogo();
	}
}

void Jogo::forca(int cdCategoria) {
	Logica logica;
	Mensagem mensagem;
	Montagem montagem;

	char jogar, letra, nmCategoria[20], letrasDigitadas[15], reservaLetras[15], palavraSorte[15], dica[20];
	int indice, pos, chances, erro, contD, acertou, digitou, controle, tamBanco;

	do {
		tamBanco = logica.buscarTamanhoBanco(cdCategoria);

		system("cls");
		srand(time(NULL));
		indice = rand() % tamBanco;
		pos = (int)indice;
		chances = 6;
		erro = 0;
		contD = 0;
		digitou = 0;
		acertou = 0;

		strcpy(letrasDigitadas, "");
		strcpy(reservaLetras, "");
		strcpy(dica, "");
		strcpy(nmCategoria, logica.buscarCategoria(cdCategoria));
		strcpy(palavraSorte, logica.consultaBanco(indice, cdCategoria));
		strcpy(dica, logica.buscarDicaPalavra(cdCategoria));

		do {
			montagem.mostraForca(palavraSorte, dica, nmCategoria, chances);
			montagem.montaForca(erro);

			controle = 0;

			if (digitou == 0) {
				for (int i = 0; i < strlen(palavraSorte); i++) {
					printf("%s ", "_");
				}
			}
			else {
				for (int i = 0; i < strlen(palavraSorte); i++) {
					if (letra == palavraSorte[i])
						reservaLetras[i] = letra;
				}

				for (int i = 0; i < strlen(palavraSorte); i++) {
					if (reservaLetras[i] == palavraSorte[i])
						printf("%c ", reservaLetras[i]);
					else
						printf("%s ", "_");
				}
			}

			cout << "\n\nLetras Digitadas: ";

			if (digitou > 0) {
				for (int i = 0; i < digitou; i++) {
					printf("%c ", letrasDigitadas[i]);
				}
			}

			if (erro < 6 && acertou < strlen(palavraSorte)) {
				printf("\n\nDigite uma letra: ");
				letra = getche();

				if (logica.validaLetraDigitada(letra, letrasDigitadas)) {
					mensagem.mensagemExcecao("Letra ja foi digitada!");
					continue;
				}
				else {
					letrasDigitadas[contD] = letra;
					digitou++;
					contD++;
				}

				system("cls");
			}

			for (int i = 0; i < strlen(palavraSorte); i++) {
				if (letra == palavraSorte[i]) {
					acertou++;
					controle++;
				}
			}

			if (controle == 0) {
				erro++;
				chances--;
			}
		} while (erro <= 6 && acertou < strlen(palavraSorte));

		if (acertou == strlen(palavraSorte)) {
			mensagem.mensagemUsuario("PARABENS, VOCE GANHOU!!!", palavraSorte);
			jogar = getche();
		}
		else {
			mensagem.mensagemUsuario("VOCE PERDEU, TENTE NOVAMENTE...", palavraSorte);
			jogar = getche();
		}

		if (jogar == '1') {
			iniciarJogo();
		}
	} while (jogar != '0');
}