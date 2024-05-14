#include "../personagens-hpp/FredFlintstone.hpp"

FredFlintstone::FredFlintstone(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int FredFlintstone::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int FredFlintstone::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string FredFlintstone::pegarDescricao() 
{
    return "Yabba Dabba Doo!";
}
