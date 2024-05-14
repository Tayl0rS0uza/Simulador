#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Calota.hpp"

Calota::Calota(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Calota::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Calota::getResistencia() 
{
    return this->resistencia;
}
