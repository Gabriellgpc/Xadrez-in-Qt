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
    //OBS.: a posicao do jogador no vetor indica a cor da peca
    // 0 - BRANOCO(jogador 1), 1 - PRETO(jogador 2)
    Jogador player[MAX_PLAYER];
    COR jogador_da_vez;
    //unsigned numJogos;//numero de partidas jogadas nessa instacia de jogo
    //Criar uma classe jogada ?
    //stack<Jogada>
public:
    game();
    ~game();

    //Reorganiza o tabuleiro
    //Zera os historico de jogadas
    //Zera a contagem de movimentos dos jogadores
    //Mantem apenas o nome dos jogadores
    void reiniciar();
    //Recebe os dados dos jogadores
    //OBS.: O vetor de jogadores deve estar na ordem, de acordo com a cor das pecas
    // de cada jogador
    void novo_jogo(Jogador VJ[]);

    //Recebe uma coordenada C, caso exista uma peca do jogador da vez
    //nessa casa, o metodo retorna uma lista de casas onde essa peca pode
    //ser movida.
    list<casa> peca_move(const casa &C)const;//pensar em um nome melhor

    //Realiza um movimento, caso o movimento seja possivel
    //o metodo retorna true e o movimento eh realizado
    //caso a jogada seja invalida retorna false apenas.
    bool jogada(const casa &casa_peca,const casa &casa_destino);
};

#endif // GAME_H
