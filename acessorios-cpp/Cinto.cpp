#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Cinto.hpp"

Cinto::Cinto(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Cinto::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Cinto::gerarRuidoAtaque()
{
    return "shiiwpaa";
}
