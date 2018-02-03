#ifndef GAME_H
#define GAME_H

#include <stack>
#include "jogador.h"
#include "peca.h"

#define TAM_TAB 8
#define MAX_PLAYER 2

class Jogada
{

};

class game
{
private:
    Peca Tab[TAM_TAB][TAM_TAB];
    Jogador player[MAX_PLAYER];
    //unsigned numJogos;//numero de partidas jogadas nessa instacia de jogo
    //Criar uma classe jogada ?
    //stack<Jogada>
public:
    game();
    
    void reiniciar();
    void novo_jogo();
    bool jogada();
};

#endif // GAME_H
