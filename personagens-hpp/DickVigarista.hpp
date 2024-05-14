#ifndef DICKVIGARISTA
#define DICKVIGARISTA
#include "../core-simulador-hpp/Personagem.hpp"
class DickVigarista: public Personagem
{
    public:
        DickVigarista(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif