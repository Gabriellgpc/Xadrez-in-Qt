#include "peca.h"

bool Peca_Rei::valid_move(Position pos_sourc, Position pos_dest)
{

}

bool Peca_Rainha::valid_move(Position pos_sourc, Position pos_dest)
{

}

bool Peca_Peao::valid_move(Position pos_sourc, Position pos_dest)
{
    int delta_H,delta_V;
    delta_H = pos_dest.hor - pos_sourc.hor;
    delta_V = pos_dest.ver - pos_sourc.ver;

    if(delta_H > TAM_TAB || delta_V > TAM_TAB)
        return false;

    switch (cor)
    {
    case BRANCO:
        if(delta_H < 0 || delta_V != 0) // andar pra tras ou andar pros lados
           return false;
        //supondo que o tabuleiro foi iniciado de forma correta
        if(count_move == 0)  // primeiro movimento do peao
            if(delta_H > 2)  //andar no maximo 2 casas
                return false;
        if(delta_H > 1) // se n for o primeiro movimento, so pode andar 1 casa
            return false;
    case PRETO:
        delta_H = delta_H*-1;
        delta_V = delta_V*-1;

        if(delta_H < 0 || delta_V != 0) // andar pra tras ou andar pros lados
           return false;
        //supondo que o tabuleiro foi iniciado de forma correta
        if(count_move == 0)  // primeiro movimento do peao
            if(delta_H > 2)  //andar no maximo 2 casas
                return false;
        if(delta_H > 1) // se n for o primeiro movimento, so pode andar 1 casa
            return false;
        break;
    default:
        return false;
        break;
    }
    return true;
}

bool Peca_Torre::valid_move(Position pos_sourc, Position pos_dest)
{

}

bool Peca_Cavalo::valid_move(Position pos_sourc, Position pos_dest)
{

}

bool Peca_Bispo::valid_move(Position pos_sourc, Position pos_dest)
{
    switch (cor){
    case BRANCO:

    case PRETO:

        break;
    default:
        break;
    }
}
