#ifndef DOMINOS_H
#define DOMINOS_H

enum orientation{

    vertical,
    horizontal

};

enum domino_type{

    Double,
    Normal,

};

enum Num1{
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    NONE

};

enum Num2{
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    NONE
};

class dominos
{
    public:
        dominos(Num1,Num2);

    protected:

    private:
};

#endif // DOMINOS_H
