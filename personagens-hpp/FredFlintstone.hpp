#ifndef FREDFLINTSTONE
#define FREDFLINTSTONE
#include "../core-simulador-hpp/Personagem.hpp"
class FredFlintstone: public Personagem
{
    public:
        FredFlintstone(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif