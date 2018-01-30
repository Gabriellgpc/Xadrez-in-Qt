#ifndef GAME_H
#define GAME_H

#include <stack>
#include "jogador.h"


#define TAM_TAB 8
#define MAX_PLAYER 2

class game
{
private:
    TIPOPECA Tab[TAM_TAB][TAM_TAB];
    Jogador player[MAX_PLAYER];
    //Criar uma classe jogada ?
    //stack<Jogada>
public:
    game();

    void reiniciar();
    void novo_jogo();
    bool jogada();
};

#endif // GAME_H
