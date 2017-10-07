#pragma once

class Mensagem
{
	public:
		Mensagem();
		virtual ~Mensagem();
		void mensagemUsuarioOpcao();
		void mensagemUsuario(std::string mensagem, std::string palavraSorte);
		void mensagemExcecao(std::string mensagem);
};

