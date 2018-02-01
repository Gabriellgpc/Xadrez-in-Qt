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
    unsigned count_move;
public:
    Peca(): cor(NONE),tipo(VAZIO),count_move(0) {}
    Peca(TIPOPECA tipo_peca): tipo(tipo_peca) {}
    virtual ~Peca();

    virtual ptr_peca clone();

    TIPOPECA getTipo() { return tipo; }
    inline unsigned getCountMove() {return count_move; }

    void setCor(COR cor);
    void setMovimentos(unsigned cmove);

    virtual void move();
};

class Peca_Rei: public Peca
{
public:
    Peca_Rei() { Peca(1) };
    ~Peca_Rei();


    void move();
};

class Peca_Rainha:public Peca
{
public:
    void move();
};

class Peca_Peao:public Peca
{
public:

    void promover();
    void move();
};

class Peca_Torre:public Peca
{
public:
    void move();
};

class Peca_Cavalo:public Peca
{
public:
    void move();
};

class Peca_Bispo:public Peca
{
public:
    void move();
};



#endif // PECA_H
