#ifndef PECA_H
#define PECA_H

#include <list>

#define ERRO 666
#define TAM_TAB 8

using std::list;

enum TIPOPECA{
    VAZIO = 1000,
    PEAO = 1001,
    RAINHA = 1002,
    TORRE = 1003,
    CAVALO = 1004,
    BISPO = 1005,
    REI = 1006
};
enum COR{
    NONE = 9,
    PRETO = 1,
    BRANCO = 0
};

class Peca;
typedef Peca *ptr_peca;

class Position
{
private:
    unsigned hor;
    unsigned ver;
public:
    Position(unsigned H, unsigned V):hor(H),ver(V) {}
    friend class peca;
};

//classe polimorfica
class Peca
{
protected:
    COR cor;
    TIPOPECA tipo;
    unsigned count_move;
public:
    Peca(TIPOPECA tipo_peca = VAZIO): tipo(tipo_peca) {}
    Peca(TIPOPECA tipo_peca,COR cor): tipo(tipo_peca),cor(cor) {}
    Peca(const Peca &P);

    virtual ~Peca();

    virtual ptr_peca clone()const= 0;

    inline TIPOPECA get_Tipo() const { return tipo; }
    inline void setTipo(TIPOPECA Tipo) { tipo = Tipo;}

    void setCor(COR cor) { cor = cor; }
    inline COR getCor() const{ return cor; }

    //Este metodo retorna true caso o movimento da peca para a Casa destino
    //seja possivel, ou false caso contrario
    // H/V sour => coordenada atual da peca
    // H/V dest => coordenada destino
    virtual bool valid_move(Position pos_sourc,Position pos_dest) = 0;

    inline bool operator==(TIPOPECA Peca) { return tipo == Peca; }
};

class Peca_Rei: public Peca
{
public:
    inline Peca_Rei() :Peca(REI) { }
    inline Peca_Rei(COR cor) : Peca(REI,cor) {}

    ~Peca_Rei();

    ptr_peca clone() const { return new Peca_Rei(*this);}

    bool valid_move(Position pos_sourc,Position pos_dest);
};

class Peca_Rainha:public Peca
{
public:
    inline Peca_Rainha(): Peca(RAINHA) {  }
    inline Peca_Rainha(COR cor) :Peca(RAINHA,cor){  }
    ~Peca_Rainha();

    ptr_peca clone() const{ return new Peca_Rainha(*this); }

    bool valid_move(Position pos_sourc,Position pos_dest);
};

class Peca_Peao:public Peca
{
public:
    inline Peca_Peao():Peca(PEAO) {  }
    inline Peca_Peao(COR cor):Peca(PEAO,cor) {  }
    ~Peca_Peao();

    void promover();

    ptr_peca clone() const{ return new Peca_Peao(*this); }

    bool valid_move(Position pos_sourc,Position pos_dest);
};

class Peca_Torre:public Peca
{
public:
    inline Peca_Torre() : Peca(TORRE) {  }
    inline Peca_Torre(COR cor) : Peca(TORRE,cor) {  }
    ~Peca_Torre();

    ptr_peca clone() const{ return new Peca_Torre(*this); }

    bool valid_move(Position pos_sourc,Position pos_dest);
};

class Peca_Cavalo:public Peca
{
public:
    inline Peca_Cavalo() :Peca(CAVALO) {  }
    inline Peca_Cavalo(COR cor) :Peca(CAVALO,cor) { }
    ~Peca_Cavalo();

    ptr_peca clone() const{ return new Peca_Cavalo(*this); }

    bool valid_move(Position pos_sourc,Position pos_dest);
};

class Peca_Bispo:public Peca
{
public:
    inline Peca_Bispo() :Peca(BISPO) {  }
    inline Peca_Bispo(COR cor):Peca(BISPO,cor) {  }
    ~Peca_Bispo();

    ptr_peca clone() const{ return new Peca_Bispo(*this); }

    bool valid_move(Position pos_sourc,Position pos_dest);
};

#endif // PECA_H
