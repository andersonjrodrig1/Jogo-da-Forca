#pragma once
class Montagem
{
	public:
		Montagem();
		virtual ~Montagem();
		void mostraForca(char palavraSorte[], char dica[], char nmCategoria[], int chances);
		void montaForca(int erro);
};

