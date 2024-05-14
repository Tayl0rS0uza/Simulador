#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Frigideira.hpp"

Frigideira::Frigideira(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Frigideira::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Frigideira::gerarRuidoAtaque()
{
    return "paá paá";
}
