#include "peca.h"

bool Position::isValid()
{
    if(hor >= TAM_TAB || ver >= TAM_TAB)
        return false;
    return true;
}
// Rei
bool Peca_Rei::valid_move(Position pos_sourc, Position pos_dest,
                          const ptr_peca Tab_copy[TAM_TAB][TAM_TAB])
{

}
// Rainha
bool Peca_Rainha::valid_move(Position pos_sourc, Position pos_dest,
                             const ptr_peca Tab_copy[TAM_TAB][TAM_TAB])
{

}
// Peao
bool Peca_Peao::valid_move(Position pos_sourc, Position pos_dest,
                           const ptr_peca Tab_copy[TAM_TAB][TAM_TAB])
{
    int delta_H,delta_V;
    unsigned H = pos_dest.getHor();
    unsigned V = pos_dest.getVer();
    if(!pos_dest.isValid() || Tab_copy[H][V]->get_Tipo() != VAZIO)
        return false;
    delta_H = pos_dest.getHor() - pos_sourc.getHor();
    delta_V = pos_dest.getVer() - pos_sourc.getVer();
    if(cor == PRETO)
    {
        delta_H = delta_H*-1;
        delta_V = delta_V*-1;
    }

    if(delta_H < 0 || delta_V != 0) // andar pra tras ou andar pros lados
      return false;
    //supondo que o tabuleiro foi iniciado de forma correta
    if(count_move == 0)  // primeiro movimento do peao
    {
        if(delta_H > 2)  //andar no maximo 2 casas
            return false;
        if(delta_H == 2 && Tab_copy[H-1][V]->get_Tipo() != VAZIO)//nao pular peca
            return false;
    }

    if(delta_H > 1) // se n for o primeiro movimento, so pode andar 1 casa
        return false;
    return true;
}

bool Peca_Peao::valid_cap(Position pos_sourc, Position pos_dest,
                          const ptr_peca Tab_copy[TAM_TAB][TAM_TAB])
{
    unsigned H = pos_dest.getHor(), V = pos_dest.getVer();
    int delta_H,delta_V;
    //Nao captura a mesma cor
    //Nao captura o vazio
    if(Tab_copy[H][V]->get_Tipo() == VAZIO || Tab_copy[H][V]->getCor() == this->cor)
        return false;
    delta_H = H - pos_sourc.getHor();
    delta_V = V - pos_sourc.getVer();
    //O Peao so captura pra cima na diagonal
    //logo delta_H == 1, delta_V == 1 ou -1
    if(delta_H != 1 || delta_V == 0 || delta_V > 1 || delta_V <-1)
        return false;
    return true;
}
// Torre
bool Peca_Torre::valid_move(Position pos_sourc, Position pos_dest,
                            const ptr_peca Tab_copy[TAM_TAB][TAM_TAB])
{

}
bool Peca_Torre::valid_cap(Position pos_sourc, Position pos_dest,
                           const ptr_peca Tab_copy[TAM_TAB][TAM_TAB])
{

}
// Cavalo
bool Peca_Cavalo::valid_move(Position pos_sourc, Position pos_dest,
                             const ptr_peca Tab_copy[TAM_TAB][TAM_TAB])
{
    //O movimento do Cavalo eh igual independente da cor
    //Utilizarei, para validar o movimento, um padrao simples que observei
    //na soma das variacoes das coordenadas horizontais e verticais
    // nota-se que delta_H + delta_V = I
    // onde I pertence ao conjunto {-1,1,3}
    int delta_H,delta_V;
    unsigned H,V;
    int I;
    if(!pos_dest.isValid() || (Tab_copy[H][V]->get_Tipo() != VAZIO) )return false;
    delta_H = pos_dest.getHor() - pos_sourc.getHor();
    delta_V = pos_dest.getVer() - pos_sourc.getVer();
    I = delta_H - delta_V;
    if(I != -1 && I != 1 && I != 3 )
        return false;
    return true;
}
bool Peca_Cavalo::valid_cap(Position pos_sourc, Position pos_dest,
                            const ptr_peca Tab_copy[TAM_TAB][TAM_TAB])
{

}
//Bispo
bool Peca_Bispo::valid_move(Position pos_sourc, Position pos_dest,
                            const ptr_peca Tab_copy[TAM_TAB][TAM_TAB])
{
    //Nota-se que para um movimento valido do Bispo
    //temos que delta_H + delta_V = I
    //onde I pertence ao conjunto {-6,-4,-2,0,2,3,5,7}

    int delta_H,delta_V;
    int I;
    if(!pos_dest.isValid())return false;
    delta_H = pos_dest.getHor() - pos_sourc.getHor();
    delta_V = pos_dest.getVer() - pos_sourc.getVer();
    I = delta_H - delta_V;
    if(I != -6 && I != -4 && I != -2 && I != 0 && I != 2
            && I != 3
            && I != 5
            && I != 7)
        return false;
    return true;
}
bool Peca_Bispo::valid_cap(Position pos_sourc, Position pos_dest,
                           const ptr_peca Tab_copy[TAM_TAB][TAM_TAB])
{

}
