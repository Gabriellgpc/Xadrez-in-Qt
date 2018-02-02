#include "jogador.h"

Jogador::Jogador():
    count_move(0),
    Capturas(),
    cor_pecas(NONE),
    nome("")
{
    //Preechendo a list das pecas do jogador
    for(unsigned i = 0; i < 8; i++) // 8 peoes
    {
        Pecas.push_back(new Peca_Peao);
    }
    for(unsigned i = 0 ; i < 2; i++) // 2x torre,cavalo,bispo
    {
        Pecas.push_back(new Peca_Torre);
        Pecas.push_back(new Peca_Cavalo);
        Pecas.push_back(new Peca_Bispo);
    }
    // 1x Rei, Rainha
    Pecas.push_back(new Peca_Rei);
    Pecas.push_back(new Peca_Rainha);
}

Jogador::Jogador(const string &Nome,COR cor):
    nome(Nome),
    cor_pecas(cor)
{
    unsigned lin_init;
    if(cor == BRANCO)
        lin_init = 7;
    else
        lin_init = 1;

    //Preechendo a list das pecas do jogador
    for(unsigned i = 0; i < 8; i++) // 8 peoes
    {
        Pecas.push_back(new Peca_Peao);
        Pecas.back()->setCor(cor);
        Pecas.back()->setPos(lin_init,i);
    }

    if(cor == BRANCO)
        lin_init = 8;
    else
        lin_init = 0;

    for(unsigned i = 0 ; i < 2; i++) // 2x torre,cavalo,bispo
    {
        Pecas.push_back(new Peca_Torre);
        Pecas.back()->setCor(cor);
        Pecas.back()->setPos(lin_init, (i)?0:7);
        Pecas.push_back(new Peca_Cavalo);
        Pecas.back()->setCor(cor);
        Pecas.back()->setPos(lin_init, (i)?1:6);
        Pecas.push_back(new Peca_Bispo);
        Pecas.back()->setCor(cor);
        Pecas.back()->setPos(lin_init, (i)?2:5);
    }
    // 1x Rei, Rainha
    Pecas.push_back(new Peca_Rei);
    Pecas.back()->setCor(cor);
    Pecas.back()->setPos(lin_init,4);
    Pecas.push_back(new Peca_Rainha);
    Pecas.back()->setCor(cor);
    Pecas.back()->setPos(lin_init,3);
}

void Jogador::setCorPeca(COR corPeca)
{
    this->cor_pecas = corPeca;
}
