#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Baguete.hpp"
#include "../acessorios-hpp/Cinto.hpp"
#include "../acessorios-hpp/Galho.hpp"
#include "../acessorios-hpp/Frigideira.hpp"
#include "../acessorios-hpp/Regua.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Calota.hpp"
#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/Colete.hpp"
#include "../acessorios-hpp/Tabua.hpp"
#include "../acessorios-hpp/Porta.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../personagens-hpp/Goku.hpp"
#include "../personagens-hpp/FredFlintstone.hpp"
#include "../personagens-hpp/Pernalonga.hpp"
#include "../personagens-hpp/Lion.hpp"
#include "../personagens-hpp/DickVigarista.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Prata",0,50);
    ArmaAtaque* arma3 = new Baguete("Delicioso Baguete frances",0,30);
    ArmaAtaque* arma4 = new Cinto("Poderoso Cinto de couro",0,70);
    ArmaAtaque* arma5 = new Galho("Galho de madeira",0,40);
    ArmaAtaque* arma6 = new Frigideira("Frigideira antaderente",0,60);
    ArmaAtaque* arma7 = new Regua("Regua de 30cm",0,55);


    ArmaDefesa* escudo = new Escudo("Latao", 3);
    ArmaDefesa* escudo1 = new Calota("Calota de aco", 4);
    ArmaDefesa* escudo2 = new Armadura("Armadura medieval", 15);
    ArmaDefesa* escudo3 = new Colete("Colete a prova de balas", 10);
    ArmaDefesa* escudo4 = new Tabua("Tabua de maderia", 5);
    ArmaDefesa* escudo5 = new Porta("Porta de aluminio", 8);

    Personagem* p1 = new Chaves(1, "Chaves", 70, arma, escudo);
    Personagem* p2 = new Goku(1, "Goku", 150, arma7, escudo1);
    Personagem* p3 = new FredFlintstone(2, "FredFlintstone", 90, arma6, escudo5);
    Personagem* p4 = new Pernalonga(3, "Pernalonga", 60, arma3, escudo2);
    Personagem* p5 = new Lion(4, "Lion", 110, arma5, escudo4);
    Personagem* p6 = new DickVigarista(5, "DickVigarista", 80, arma4, escudo3);


    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);    
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);


    
    simulador->iniciarSimulacao();

    return 0;
}