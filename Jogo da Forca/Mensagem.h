#pragma once
class Mensagem
{
	public:
		Mensagem();
		virtual ~Mensagem();
		void mensagemUsuarioOpcao();
		void mensagemUsuario(char *mensagem, char palavraSorte[]);
		void mensagemExcecao(char *mensagem);
};

