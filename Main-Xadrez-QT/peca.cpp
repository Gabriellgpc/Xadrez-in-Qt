#include "peca.h"

casa::casa(unsigned H,unsigned V)
{
    if(H >= TAM_TAB || V >= TAM_TAB)
    {
        H = ERRO;
        V = ERRO;
    }
    hor = H;
    ver = V;
}

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

Peca::Peca(TIPOPECA tipo, COR cor)
{
    this->tipo = tipo;
    this->cor = cor;
}


bool Peca::setPos(casa CASA)
{
    if(lin > 8 || col > 8)
        return false;
    pos[0] = lin;
    pos[1] = col;
    return true;
}

void Peca::getPos(unsigned out_pos[])
{
    out_pos[0] = pos[0];
    out_pos[1] = pos[1];
}

int Peca::getTipo()
{
    return this->tipo;
}

void Peca::setTipoCor(TIPOPECA tipo, COR cor)
{
    this->tipo = tipo;
    this->cor = cor;
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
