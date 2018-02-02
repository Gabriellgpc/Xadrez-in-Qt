#ifndef JOGADOR_H
#define JOGADOR_H

#include "peca.h"
#include <string>
#include <stack>
#include <list>

using namespace std;

class Jogador
{
private:
    COR cor_pecas;
    string nome;
    stack<TIPOPECA> Capturas;
    list<ptr_peca> Pecas; // Cada jogador inicia com 16 pecas
    unsigned count_move;
public:
    Jogador();
    Jogador(const string &Nome,COR cor);
    //Retorna permissao para passar a vez
    bool passar_vez();
    //Retorna se a jogada foi valida
    bool jogada();

    string getNome() const;
    void setNome(const string &Nome);

    inline void captura(TIPOPECA peca_capturada) { Capturas.push(peca_capturada); }


    COR getCorPeca() const;
    void setCorPeca(COR corPeca);
};

#endif // JOGADOR_H
