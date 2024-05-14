#include "../personagens-hpp/DickVigarista.hpp"

DickVigarista::DickVigarista(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int DickVigarista::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int DickVigarista::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string DickVigarista::pegarDescricao() 
{
    return "Muttley, faca alguma coisa!";
}