#include "../personagens-hpp/Pernalonga.hpp"

Pernalonga::Pernalonga(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Pernalonga::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Pernalonga::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Pernalonga::pegarDescricao() 
{
    return "O que e que ha, velinho?";
}
