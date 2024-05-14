#ifndef CINTO
#define CINTO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Cinto : public ArmaAtaque
{
    public:
        Cinto(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif
