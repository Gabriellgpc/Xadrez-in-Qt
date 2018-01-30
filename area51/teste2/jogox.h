#ifndef JOGOX_H
#define JOGOX_H

#include "tabuleiro.h"
/*
    Com o tabuleiro organizado, começa o jogo
    1 - As brancas começam,faça um movimento,feito?
    2 - Vez das pretas
    volta pra 1
    te


*/


class JogoX
{

private:
    Tabuleiro tabuleiro;
public:
    JogoX();
    void organizarTabuleiro();
};

#endif // JOGOX_H
