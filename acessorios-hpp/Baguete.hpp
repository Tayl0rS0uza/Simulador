#ifndef BAGUETE
#define BAGUETE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Baguete : public ArmaAtaque
{
    public:
        Baguete(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif