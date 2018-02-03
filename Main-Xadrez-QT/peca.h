#ifndef PECA_H
#define PECA_H

#include <list>
#include "game.h"

#define ERRO 666

enum TIPOPECA{VAZIO,PEAO,RAINHA,TORRE,CAVALO,BISPO,REI};

enum COR{NONE,PRETO,BRANCO};

class Peca;
typedef Peca* ptr_peca;

class casa
{
private:
    //coordenadas
    unsigned hor;
    unsigned ver;
public:
    casa(unsigned H,unsigned V); // coordenada invalida no jogo

    unsigned getHor()const {return hor; }
    bool setHor(unsigned H);

    unsigned getVer()const {return ver; }
    bool setVer(unsigned V);
    /*
    friend class Peca;
    friend class game;
    */
};

//classe polimorfica
class Peca
{
protected:
    COR cor;
    TIPOPECA tipo;
    casa pos;//Posicao atual da peca
    unsigned count_move;
public:
    //Peca(): cor(NONE),tipo(VAZIO), count_move(0),pos(){ }
    Peca(TIPOPECA tipo_peca): tipo(tipo_peca) {}
    Peca(TIPOPECA tipo_peca,COR cor): tipo(tipo_peca),cor(cor) {}
    virtual ~Peca();

    virtual ptr_peca clone() = 0;

    inline TIPOPECA getTipo() const { return tipo; }
    inline void setTipo(TIPOPECA Tipo) { tipo = Tipo;}

    void setCor(COR cor) { cor = cor; }
    inline COR getCor() const{ return cor; }

    //Este metodo so deve ser usado por um objeto do tipo Tabuleiro
    //A peca eh posicionada na posicao lin,col sem realizacao de testes
    //Retorna true se a alteracao deu certo,false caso contrario
    bool setPos(casa CASA);
    inline casa getPos() const{ return pos; }

    //Este metodo testa se a peca pode se movimentar para a casa destino
    //caso seja possivel ele retorna true e realiza o movimento, caso contrario
    //apenas retorna false
    /** virtual bool move(unsigned lin,unsigned col) = 0; */ //este metodo sera removido

    //Este metodo retorna true caso o movimento da peca para a casa destino
    //seja possivel, ou false caso contrario
    virtual bool valid_move(casa CASA)const = 0;
    //Preenche a lista de possiveis_mov
    virtual list<casa> &movimentos()const = 0;

    inline bool operator==(TIPOPECA Peca) { return tipo == Peca; }

};

class Peca_Rei: public Peca
{
public:
    inline Peca_Rei() { Peca(REI); }
    inline Peca_Rei(COR cor) { Peca(REI,cor); }
    ~Peca_Rei();

    ptr_peca clone() { return new Peca_Rei(*this); }
    list<casa> &movimentos()const;
    bool valid_move(casa CASA);
};

class Peca_Rainha:public Peca
{
public:
    inline Peca_Rainha() { Peca(RAINHA); }
    inline Peca_Rei(COR cor) { Peca(RAINHA,cor); }
    ~Peca_Rainha();

    ptr_peca clone() { return new Peca_Rainha(*this); }
    list<casa> &movimentos()const;
    bool valid_move(casa CASA);
};

class Peca_Peao:public Peca
{
public:
    inline Peca_Peao() { Peca(PEAO); }
    inline Peca_Rei(COR cor) { Peca(PEAO,cor); }
    ~Peca_Peao();

    void promover();

    ptr_peca clone() { return new Peca_Peao(*this); }
    list<casa> &movimentos()const;
    bool valid_move(casa CASA);
};

class Peca_Torre:public Peca
{
public:
    inline Peca_Torre() { Peca(TORRE); }
    inline Peca_Rei(COR cor) { Peca(TORRE,cor); }
    ~Peca_Torre();

    ptr_peca clone() { return new Peca_Torre(*this); }
    list<casa> &movimentos()const;
    bool valid_move(casa CASA);
};

class Peca_Cavalo:public Peca
{
public:
    inline Peca_Cavalo() { Peca(CAVALO); }
    inline Peca_Rei(COR cor) { Peca(CAVALO,cor); }
    ~Peca_Cavalo();

    ptr_peca clone() { return new Peca_Cavalo(*this); }
    list<casa> &movimentos()const;
    bool valid_move(casa CASA);
};

class Peca_Bispo:public Peca
{
public:
    inline Peca_Bispo() { Peca(BISPO); }
    inline Peca_Rei(COR cor) { Peca(BISPO,cor); }
    ~Peca_Bispo();

    ptr_peca clone() { return new Peca_Bispo(*this); }
    list<casa> &movimentos()const;
    bool valid_move(casa CASA);
};


#endif // PECA_H
