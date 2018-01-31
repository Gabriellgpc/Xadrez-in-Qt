#ifndef PECA_H
#define PECA_H

enum TIPOPECA{NADA,PEAO,RAINHA,TORRE,CAVALO,BISPO,REI};

enum COR{NONE,PRETO,BRANCO};

//classe polimorfica
class Peca
{
private:
    COR cor;
    TIPOPECA tipo;
    unsigned movimentos;
public:
    Peca(TIPOPECA tipo = NADA,COR cor = NONE);
    int getTipo();
    void setTipoCor(TIPOPECA tipo,COR cor);
    void move();
};

class Peca_Rei: public Peca
{
public:
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

