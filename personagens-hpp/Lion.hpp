#ifndef LION
#define LION
#include "../core-simulador-hpp/Personagem.hpp"
class Lion: public Personagem
{
    public:
        Lion(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif
