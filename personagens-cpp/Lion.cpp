#include "../personagens-hpp/Lion.hpp"

Lion::Lion(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Lion::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Lion::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Lion::pegarDescricao() 
{
    return "Espada Justiceira, de-me a visao alem do alcance!";
}
