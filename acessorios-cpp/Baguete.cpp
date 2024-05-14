#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Baguete.hpp"

Baguete::Baguete(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Baguete::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Baguete::gerarRuidoAtaque()
{
    return "crunch crunch";
}

