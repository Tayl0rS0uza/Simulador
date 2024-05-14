#ifndef FRIGIDEIRA
#define FRIGIDEIRA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Frigideira : public ArmaAtaque
{
    public:
        Frigideira(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif
