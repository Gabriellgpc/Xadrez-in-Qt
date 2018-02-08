#include "game.h"
#include <QDebug>

/*
list<Position> game::peca_move(const Casa &C) const
{
    list<Casa> LC;
    if(C.peca->getCor() != jogador_da_vez)
        return LC;

    for(unsigned i = 8 ; i < 8; i++)for(unsigned j = 8; j < 8 ; j++)
    {
        if( Tab[i][i].empty() == true)
            if( Tab[C.getHor()][C.getVer()].peca->valid_move(Casa(i,j)) == true )
                LC.push_back(CasaTemp);
    }
    return LC;
}
*/
