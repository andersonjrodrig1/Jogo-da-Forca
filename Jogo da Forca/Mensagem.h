#pragma once
class Mensagem
{
	public:
		Mensagem();
		virtual ~Mensagem();
		void mostraForca(char palavraSorte[], char dica[], char nmCategoria[], int chances);
		void mensagemUsuario(char *mensagem, char palavraSorte[]);
		void mensagemExcecao(char *mensagem);
};

