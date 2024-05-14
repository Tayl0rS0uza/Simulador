#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Tabua.hpp"

Tabua::Tabua(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Tabua::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Tabua::getResistencia() 
{
    return this->resistencia;
}
