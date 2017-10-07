#pragma once

class Montagem
{
	public:
		Montagem();
		virtual ~Montagem();
		void mostraForca(std::string palavraSorte, std::string dica, std::string nmCategoria, int chances);
		void montaForca(int erro);
};

