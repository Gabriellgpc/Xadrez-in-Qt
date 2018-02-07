#include "peca.h"


bool Casa::setVer(unsigned V)
{
    if(V >= TAM_TAB)
        return false;
    ver = V;
    return true;
}
bool Casa::setHor(unsigned H)
{
    if(H >= TAM_TAB)
        return false;
    hor = H;
    return true;
}

bool Casa::is_valid()
{
    if( hor >= TAM_TAB || ver >= TAM_TAB )
        return false;
    return true;
}

bool Peca::setPos(Casa casa)
{
    if(casa.is_valid())
        return false;
    pos = casa;
    return true;
}

// Rei
bool Peca_Rei::valid_move(Casa casa)
{

}
//Rainha
bool Peca_Rainha::valid_move(Casa casa)
{

}
//Bispo
bool Peca_Bispo::valid_move(Casa casa)
{

}
//Cavalo
bool Peca_Cavalo::valid_move(Casa casa)
{

}
//Torre
bool Peca_Torre::valid_move(Casa casa)
{

}
//Peao
bool Peca_Peao::valid_move(Casa casa)
{

}
/*
list<Casa>& Peca_Peao::movimentos()const
{
    list<Casa> possiveis_mov;

    if(this->cor == BRANCO)
    {
        //Primeiro movimento
        if(this->count_move == 0){
            possiveis_mov.push_back(Casa(pos.getHor(),pos.getVer()+2));
            possiveis_mov.push_back(Casa(pos.getHor(),pos.getVer()+1));
        }
        else{
            if(pos.getVer() < 7)
                possiveis_mov.push_back( Casa(pos.getHor(),pos.getVer()+1) );
        }
    }
    else
    {
        if(this->count_move == 0){//Primeiro movimento
            possiveis_mov.push_back(Casa(pos.getHor(),pos.getVer()-2));
            possiveis_mov.push_back(Casa(pos.getHor(),pos.getVer()-1));
        }
        else{
            if(pos.getVer() > 0)
                possiveis_mov.push_back( Casa(pos.getHor(),pos.getVer()-1) );
        }
    }
    return possiveis_mov;
}
*/
