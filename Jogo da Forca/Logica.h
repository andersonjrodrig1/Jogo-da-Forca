#pragma once

class Logica
{
	public:
		Logica();
		virtual ~Logica();
		bool validaLetraDigitada(char letra, std::string letrasDigitadas);
		std::string consultaBanco(int indice, int cdCategoria);
		std::string buscarDicaPalavra(int cdCategoria);
		int validaCategoria(char op);
		std::string buscarCategoria(int cdCategoria);
		int buscarTamanhoBanco(int cdCategoria);
};

