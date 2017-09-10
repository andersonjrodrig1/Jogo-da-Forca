#pragma once
class Logica
{
	public:
		Logica();
		virtual ~Logica();
		int validaLetraDigitada(char letra[], char letrasDigitadas[]);
		char *consultaBanco(int indice, int cdCategoria);
		char *buscarDicaPalavra(int cdCategoria);
		int validaCategoria(char *op);
		char *buscarCategoria(int cdCategoria);
		int buscarTamanhoBanco(int cdCategoria);
};

