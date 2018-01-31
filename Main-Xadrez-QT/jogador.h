#ifndef JOGADOR_H
#define JOGADOR_H

#include "peca.h"
#include <string>
#include <stack>

using namespace std;

class Jogador
{
private:
    COR cor_pecas;
    string nome;
    stack<TIPOPECA> Capturas;
public:
    Jogador();

    //Retorna permissao para passar a vez
    bool passar_vez();
    //Retorna se a jogada foi valida
    bool jogada();

    void setCorPeca(COR corPeca);

};

#endif // JOGADOR_H
