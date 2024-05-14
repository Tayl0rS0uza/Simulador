#ifndef PERNALONGA
#define PERNALONGA
#include "../core-simulador-hpp/Personagem.hpp"
class Pernalonga: public Personagem
{
    public:
        Pernalonga(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif