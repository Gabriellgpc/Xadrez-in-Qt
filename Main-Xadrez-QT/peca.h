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
    Peca(TIPOPECA tipo_peca,COR cor): tipo(tipo_peca),cor(cor) {}
    virtual ~Peca();

    virtual ptr_peca clone() = 0;

    inline TIPOPECA getTipo() const { return tipo; }
    inline void setTipo(TIPOPECA Tipo) { tipo = Tipo;}

    void setCor(COR cor) { cor = cor; }
    inline COR getCor() { return cor; }

    //Este metodo so deve ser usado por um objeto do tipo Tabuleiro
    //A peca eh posicionada na posicao lin,col sem realizacao de testes
    void setPos(unsigned lin, unsigned col);
    void getPos(unsigned out_pos[]);

    //Este metodo testa se a peca pode se movimentar para a posicao lin,col
    //caso seja possivel ele retorna true e realiza o movimento, caso contrario
    //apenas retorna false
    virtual bool move(unsigned lin,unsigned col) = 0;
    //Este metodo retorna true caso o movimento da peca para a posicao lin,col
    //seja possivel, ou false caso contrario
    virtual bool test_move(unsigned lin, unsigned col) = 0;

    inline bool operator==(TIPOPECA Peca) { return tipo == Peca; }
};

class Peca_Rei: public Peca
{
public:
    inline Peca_Rei() { Peca(REI); }
    inline Peca_Rei(COR cor) { Peca(REI,cor); }
    ~Peca_Rei();

    virtual ptr_peca clone() { return new Peca_Rei(*this); }
    bool move(unsigned lin,unsigned col);
    bool test_move(unsigned lin, unsigned col);
};

class Peca_Rainha:public Peca
{
public:
    inline Peca_Rainha() { Peca(RAINHA); }
    inline Peca_Rei(COR cor) { Peca(RAINHA,cor); }
    ~Peca_Rainha();

    virtual ptr_peca clone() { return new Peca_Rainha(*this); }
    bool move(unsigned lin,unsigned col);
    bool test_move(unsigned lin, unsigned col);
};

class Peca_Peao:public Peca
{
public:
    inline Peca_Peao() { Peca(PEAO); }
    inline Peca_Rei(COR cor) { Peca(PEAO,cor); }
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
    inline Peca_Rei(COR cor) { Peca(TORRE,cor); }
    ~Peca_Torre();

    virtual ptr_peca clone() { return new Peca_Torre(*this); }
    bool move(unsigned lin,unsigned col);
    bool test_move(unsigned lin, unsigned col);
};

class Peca_Cavalo:public Peca
{
public:
    inline Peca_Cavalo() { Peca(CAVALO); }
    inline Peca_Rei(COR cor) { Peca(CAVALO,cor); }
    ~Peca_Cavalo();

    virtual ptr_peca clone() { return new Peca_Cavalo(*this); }
    bool move(unsigned lin,unsigned col);
    bool test_move(unsigned lin, unsigned col);
};

class Peca_Bispo:public Peca
{
public:
    inline Peca_Bispo() { Peca(BISPO); }
    inline Peca_Rei(COR cor) { Peca(BISPO,cor); }
    ~Peca_Bispo();

    virtual ptr_peca clone() { return new Peca_Bispo(*this); }
    bool move(unsigned lin,unsigned col);
    bool test_move(unsigned lin, unsigned col);
};


#endif // PECA_H
