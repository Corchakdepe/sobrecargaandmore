//
//  complejo.hpp
//  practica0_mp
//
//  Created by Ageu Depetris on 26/9/23.
//

#ifndef complejo_hpp
#define complejo_hpp

#include <stdio.h>
#include <fstream>
using namespace std;
class Complejo
{
    int r;
    int i;
public:
    //Complejo();
    Complejo(int r,int i);
    Complejo(int r);
    void setr(int r);
    void seti(int i);
    int  getr() const;
    int  geti() const;
    void  ver() const;
    //void  ver();
    void set(int real, int img);
    void set();
    Complejo operator+(Complejo aux) const;
    Complejo operator-(Complejo aux) const;
    Complejo operator+(int real) const;
    Complejo operator-(int real) const;
    Complejo operator-() const;
    Complejo operator++();
    Complejo operator--();
    Complejo operator++(int);
    Complejo operator--(int);
    bool operator==(Complejo aux);
    friend ostream& operator<<(ostream& os, const Complejo& comp);
};

Complejo operator+(int real,Complejo aux);

#endif /* complejo_hpp */
