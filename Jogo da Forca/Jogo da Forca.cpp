#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

const char *frutas[] = { "manga","banana","maca","melao","caqui","pera","melancia","abacaxi","limao" };
const char *verduras[] = { "alface","cebola","jilo","beterraba","batata","quiabo","abobora","batata doce","milho" };
const char *bebidas[] = { "agua","cafe","suco","guarana","cerveja","pinga" };
const char *comidas[] = { "arroz","feijao","macarrao","frango","carne bovina","carne de porco" };

int main()
{
	iniciarJogo();
	system("cls");
	exit(0);

	return 0;
}

void iniciarJogo() {
	char op[1];

	printf("\t\t***** Bem vindo ao Jogo da Forca *****\n");
	printf("\nEscolha uma categoria para iniciar o Jogo:\n");
	printf("\n1- Frutas");
	printf("\n2- Verduras");
	printf("\n3- Bebidas");
	printf("\n4- Comidas");
	printf("\n\nEscolha uma opcao: ");

	scanf("%c", &op);

	int cdCategoria = validaCategoria(op);

	if (cdCategoria > 0) {
		forca(cdCategoria);
	}
	else {
		mensagemExcecao("Opcao invalida. Tente novamente!");
		iniciarJogo();
	}
}

void mostraForca(char palavraSorte[], char dica[], char nmCategoria[], int chances) {
	printf("\t\t************* JOGO DA FORCA **************");
	printf("\n\nDICA: %s %d LETRAS.", strupr(dica), strlen(palavraSorte));
	printf("\n\nCHANCES: %d", chances);
	printf("\n\nPALAVRA: ");
}

void mensagemUsuario(char *mensagem, char palavraSorte[]) {
	printf("\t\t\tBEM VINDO AO JOGO DA FORCA");
	printf("\n\n\n%s\n\n", mensagem);
	printf("Palavra Sorteada: %s", palavraSorte);
	printf("\n\nDeseja jogar novamente, pressione qualquer tecla");
	printf("\nPara trocar a categoria, pressione 1");
	printf("\nPara sair, pressione 0");
	printf("\n\nEscolha uma opcao: ");
}

void mensagemExcecao(char *mensagem) {
	system("cls");
	printf("\t\t***** Bem vindo ao Jogo da Forca *****\n");
	printf("\n\n%s\n\n", mensagem);
	system("pause");
	system("cls");
}

int validaLetraDigitada(char letra[], char letrasDigitadas[]) {
	int i;
	for (i = 0; i < strlen(letrasDigitadas); i++) {
		if (letra == letrasDigitadas[i])
			return 1;
	}

	return 0;
}

char *consultaBanco(int indice, int cdCategoria) {
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

char *buscarDicaPalavra(int cdCategoria) {
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

int validaCategoria(char *op) {
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

char *buscarCategoria(int cdCategoria) {
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

int buscarTamanhoBanco(int cdCategoria) {
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

void montaForca(int erro) {
	switch (erro) {
	case 0:
		printf("\n\n|--------|");
		printf("\n|\t |");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n----\n\n");
		break;
	case 1:
		printf("\n\n|--------|");
		printf("\n|\t |");
		printf("\n|");
		printf("\t O");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n----\n\n");
		break;
	case 2:
		printf("\n\n|--------|");
		printf("\n|\t |");
		printf("\n|");
		printf("\t O");
		printf("\n|");
		printf("\t/");
		printf("\n|");
		printf("\n|");
		printf("\n----\n\n");
		break;
	case 3:
		printf("\n\n|--------|");
		printf("\n|\t |");
		printf("\n|");
		printf("\t O");
		printf("\n|");
		printf("\t/");
		printf("|");
		printf("\n|");
		printf("\n|");
		printf("\n----\n\n");
		break;
	case 4:
		printf("\n\n|--------|");
		printf("\n|\t |");
		printf("\n|");
		printf("\t O");
		printf("\n|");
		printf("\t/");
		printf("|");
		printf("\\");
		printf("\n|");
		printf("\n|");
		printf("\n----\n\n");
		break;
	case 5:
		printf("\n\n|--------|");
		printf("\n|\t |");
		printf("\n|");
		printf("\t O");
		printf("\n|");
		printf("\t/");
		printf("|");
		printf("\\");
		printf("\n|");
		printf("\t/");
		printf("\n|");
		printf("\n----\n\n");
		break;
	case 6:
		printf("\n\n|--------|");
		printf("\n|\t |");
		printf("\n|");
		printf("\t O");
		printf("\n|");
		printf("\t/");
		printf("|");
		printf("\\");
		printf("\n|");
		printf("\t/");
		printf(" \\");
		printf("\n|");
		printf("\n----\n\n");
		break;
	default:
		system("cls");
		printf("\n\nFalha ao montar a forca\n\n");
		system("pause");
		break;
	}
}

void forca(int cdCategoria) {
	char jogar, letra, nmCategoria[20], letrasDigitadas[15], reservaLetras[15], palavraSorte[15], dica[20];
	int indice, pos, chances, erro, contD, acertou, digitou, controle, tamBanco;

	do {
		tamBanco = buscarTamanhoBanco(cdCategoria);
		char *banco[tamBanco];

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
		strcpy(nmCategoria, buscarCategoria(cdCategoria));
		strcpy(palavraSorte, consultaBanco(indice, cdCategoria));
		strcpy(dica, buscarDicaPalavra(cdCategoria));

		do {
			mostraForca(palavraSorte, dica, nmCategoria, chances);

			montaForca(erro);

			controle = 0;
			int i;

			if (digitou == 0) {
				for (i = 0; i < strlen(palavraSorte); i++) {
					printf("%s ", "_");
				}
			}
			else {
				for (i = 0; i < strlen(palavraSorte); i++) {
					if (letra == palavraSorte[i])
						reservaLetras[i] = letra;
				}

				for (i = 0; i < strlen(palavraSorte); i++) {
					if (reservaLetras[i] == palavraSorte[i])
						printf("%c ", reservaLetras[i]);
					else
						printf("%s ", "_");
				}
			}

			printf("\n\nLetras Digitadas: ");
			if (digitou > 0) {
				for (i = 0; i < digitou; i++) {
					printf("%c ", letrasDigitadas[i]);
				}
			}

			if (erro < 6 && acertou < strlen(palavraSorte)) {
				printf("\n\nDigite uma letra: ");
				letra = getche();

				if (validaLetraDigitada(letra, letrasDigitadas) == 1) {
					mensagemExcecao("Letra ja foi digitada!");
					continue;
				}
				else {
					letrasDigitadas[contD] = letra;
					digitou++;
					contD++;
				}

				system("cls");
			}

			for (i = 0; i < strlen(palavraSorte); i++) {
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
			mensagemUsuario("PARABENS, VOCE GANHOU!!!", palavraSorte);
			jogar = getche();
		}
		else {
			mensagemUsuario("VOCE PERDEU, TENTE NOVAMENTE...", palavraSorte);
			jogar = getche();
		}

		if (jogar == '1') {
			iniciarJogo();
		}
	} while (jogar != '0');
}