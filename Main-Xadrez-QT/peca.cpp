#include "peca.h"


bool casa::setVer(unsigned V)
{
    if(V >= TAM_TAB)
        return false;
    ver = V;
    return true;
}
bool casa::setHor(unsigned H)
{
    if(H >= TAM_TAB)
        return false;
    hor = H;
    return true;
}

bool casa::is_valid()
{
    if( hor >= TAM_TAB || ver >= TAM_TAB )
        return false;
    return true;
}

bool Peca::setPos(casa CASA)
{
    if(CASA.is_valid())
        return false;
    pos = CASA;
    return true;
}

// Rei
bool Peca_Rei::valid_move(casa CASA)
{

}
//Rainha
bool Peca_Rainha::valid_move(casa CASA)
{

}
//Bispo
bool Peca_Bispo::valid_move(casa CASA)
{

}
//Cavalo
bool Peca_Cavalo::valid_move(casa CASA)
{

}
//Torre
bool Peca_Torre::valid_move(casa CASA)
{

}
//Peao
bool Peca_Peao::valid_move(casa CASA)
{

}
/*
list<casa>& Peca_Peao::movimentos()const
{
    list<casa> possiveis_mov;

    if(this->cor == BRANCO)
    {
        //Primeiro movimento
        if(this->count_move == 0){
            possiveis_mov.push_back(casa(pos.getHor(),pos.getVer()+2));
            possiveis_mov.push_back(casa(pos.getHor(),pos.getVer()+1));
        }
        else{
            if(pos.getVer() < 7)
                possiveis_mov.push_back( casa(pos.getHor(),pos.getVer()+1) );
        }
    }
    else
    {
        if(this->count_move == 0){//Primeiro movimento
            possiveis_mov.push_back(casa(pos.getHor(),pos.getVer()-2));
            possiveis_mov.push_back(casa(pos.getHor(),pos.getVer()-1));
        }
        else{
            if(pos.getVer() > 0)
                possiveis_mov.push_back( casa(pos.getHor(),pos.getVer()-1) );
        }
    }
    return possiveis_mov;
}
*/
