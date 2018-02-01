#ifndef PECA_H
#define PECA_H

enum TIPOPECA{VAZIO,PEAO,RAINHA,TORRE,CAVALO,BISPO,REI};

enum COR{NONE,PRETO,BRANCO};

class Peca;
typedef Peca* ptr_peca;

//classe polimorfica
class Peca
{
protected:
    COR cor;
    TIPOPECA tipo;
    unsigned pos[2];//Posicao atual da peca
public:
    Peca(): cor(NONE),tipo(VAZIO){ pos[0]=9; pos[1]=9; }
    Peca(TIPOPECA tipo_peca): tipo(tipo_peca) {}
    virtual ~Peca();

    virtual ptr_peca clone();

    inline TIPOPECA getTipo() { return tipo; }
    inline void setTipo();

    void setCor(COR color) { cor = color; }
    inline COR getCor() { return cor; }

    //Este metodo so deve ser usado por um objeto do tipo Tabuleiro
    //A peca eh posicionada na posicao lin,col sem realizacao de testes
    void setPos(unsigned lin, unsigned col);
    void getPos(unsigned out_pos[]);

    //Este metodo testa se a peca pode se movimentar para a posicao lin,col
    //caso seja possivel ele retorna true e realiza o movimento, caso contrario
    //apenas retorna false
    virtual bool move(unsigned lin,unsigned col);
    //Este metodo retorna true caso o movimento da peca para a posicao lin,col
    //seja possivel, ou false caso contrario
    virtual bool test_move(unsigned lin, unsigned col);

};

class Peca_Rei: public Peca
{
public:
    inline Peca_Rei() { Peca(REI); }
    ~Peca_Rei();

    virtual ptr_peca clone() { return new Peca_Rei(*this); }
    bool move(unsigned lin,unsigned col);
    bool test_move(unsigned lin, unsigned col);
};

class Peca_Rainha:public Peca
{
public:
    inline Peca_Rainha() { Peca(RAINHA); }
    ~Peca_Rainha();

    virtual ptr_peca clone() { return new Peca_Rainha(*this); }
    bool move(unsigned lin,unsigned col);
    bool test_move(unsigned lin, unsigned col);
};

class Peca_Peao:public Peca
{
public:
    inline Peca_Peao() { Peca(PEAO); }
    ~Peca_Peao();

    void promover();

    virtual ptr_peca clone() { return new Peca_Peao(*this); }
    bool move(unsigned lin,unsigned col);
    bool test_move(unsigned lin, unsigned col);
};

class Peca_Torre:public Peca
{
public:
    inline Peca_Torre() { Peca(TORRE); }
    ~Peca_Torre();

    virtual ptr_peca clone() { return new Peca_Torre(*this); }
    bool move(unsigned lin,unsigned col);
    bool test_move(unsigned lin, unsigned col);
};

class Peca_Cavalo:public Peca
{
public:
    inline Peca_Cavalo() { Peca(CAVALO); }
    ~Peca_Cavalo();

    virtual ptr_peca clone() { return new Peca_Cavalo(*this); }
    bool move(unsigned lin,unsigned col);
    bool test_move(unsigned lin, unsigned col);
};

class Peca_Bispo:public Peca
{
public:
    inline Peca_Bispo() { Peca(BISPO); }
    ~Peca_Bispo();

    virtual ptr_peca clone() { return new Peca_Bispo(*this); }
    bool move(unsigned lin,unsigned col);
    bool test_move(unsigned lin, unsigned col);
};


#endif // PECA_H
