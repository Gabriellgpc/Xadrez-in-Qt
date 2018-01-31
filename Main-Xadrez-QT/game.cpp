#include "game.h"
#include <QDebug>
game::game()
{
    /*

    */

}

void game::novo_jogo()
{
    /*Organizar o tabuleiro,
      mostrar escolha de peças(se for o primeiro jogo)
    */
    for(int i=0;i<TAM_TAB;i++){
        //setando peoes
        Tab[1][i].setTipoCor(PEAO,PRETO);
        Tab[6][i].setTipoCor(PEAO,BRANCO);
    }
    //pecas pretas
    Tab[0][0].setTipoCor(TORRE,PRETO);//casa branca
    Tab[0][1].setTipoCor(CAVALO,PRETO);
    Tab[0][2].setTipoCor(BISPO,PRETO);
    Tab[0][3].setTipoCor(RAINHA,PRETO);//RAINHA na casa preta
    Tab[0][4].setTipoCor(REI,PRETO);
    Tab[0][5].setTipoCor(BISPO,PRETO);
    Tab[0][6].setTipoCor(CAVALO,PRETO);
    Tab[0][7].setTipoCor(TORRE,PRETO);
    //peças brancas
    Tab[7][0].setTipoCor(TORRE,BRANCO);//casa preta
    Tab[7][1].setTipoCor(CAVALO,BRANCO);
    Tab[7][2].setTipoCor(BISPO,BRANCO);
    Tab[7][3].setTipoCor(RAINHA,BRANCO);//RAINHA na casa branca
    Tab[7][4].setTipoCor(REI,BRANCO);
    Tab[7][5].setTipoCor(BISPO,BRANCO);
    Tab[7][6].setTipoCor(CAVALO,BRANCO);
    Tab[7][7].setTipoCor(TORRE,BRANCO);

    //escolha de pecas
    bool escolha  = true;
    //player1 começa escolhendo, por enquanto
    //preta = false, branca = true

    if(escolha){
        player[0].setCorPeca(BRANCO);
        player[1].setCorPeca(PRETO);
    }
    else{
        player[1].setCorPeca(BRANCO);
        player[0].setCorPeca(PRETO);
    }
}
