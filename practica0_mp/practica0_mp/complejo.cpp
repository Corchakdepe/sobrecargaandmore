//
//  complejo.cpp
//  practica0_mp
//
//  Created by Ageu Depetris on 26/9/23.
//

#include <iostream>
#include "complejo.hpp"
using namespace std;

/*Complejo::Complejo()
{
    i = 0;
    r = 0;
};*/
Complejo::Complejo(int real,int img)
{
    i = img;
    r = real;
};
Complejo::Complejo(int real)
{
    r = real;
    i = 0;
}
void Complejo::setr(int real)
{
    r = real;
};
void Complejo::seti(int img)
{
    i = img;
};
int  Complejo::getr() const
{
    return r;
};
int  Complejo::geti() const
{
    return i;
};
void  Complejo::ver() const
{
    if(i>=0){
        cout << r << " + " << i << "i"<< endl;
    }
    else if (i<0)
    {
        cout << r << " - " << abs(i) << "i"<< endl;
    }
};

/*void Complejo::ver()
{
    if(i>=0){
        cout << r << " + " << i << "i"<< endl;
    }
    else if (i<0)
    {
        cout << r << " - " << abs(i) << "i"<< endl;
    }
};*/


void Complejo::set()
{
    cout << "parte real: ";
    cin >> r;
    setr(r);
    cout << "parte img: ";
    cin >> i;
    seti(i);
};
void Complejo::set(int real, int img)
{
    
    setr(real);
    

    seti(img);
};



ostream& operator<<(ostream& os, const Complejo& comp)
{
    if(comp.i>=0){
        os << comp.r << " + "<< comp.i << "i";
    }
    else if(comp.i<0)
    {
        os << comp.r << " - "<< abs(comp.i) << "i";
    }
    return os;
}

Complejo Complejo::operator+(Complejo aux) const
{
    aux.setr(getr()+aux.getr());
    aux.seti(geti()+aux.geti());
    return aux;
}

Complejo Complejo::operator-(Complejo aux) const
{
    aux.setr(getr()-aux.getr());
    aux.seti(geti()-aux.geti());
    return aux;
}

Complejo Complejo::operator+(int real) const
{
    Complejo aux(0,0);
    aux.setr(getr()+real);
    aux.seti(geti());
    return aux;
}

Complejo Complejo::operator-(int real) const
{
    Complejo aux(0,0);
    aux.setr(getr()-real);
    aux.seti(geti());
    return aux;
}

Complejo operator+(int real, Complejo suma)
{
    Complejo aux(0,0);
    aux.setr(real+suma.getr());
    aux.seti(suma.geti());
    return aux;
}

Complejo operator-(int real, Complejo suma) 
{
    Complejo aux(0,0);
    aux.setr(real-suma.getr());
    aux.seti(suma.geti());
    return aux;
}


/*Complejo Complejo::operator++()
{
    seti(geti()+1);
    setr(getr()+1);
    return *this;
}*/

Complejo Complejo::operator++()
{
    setr(getr()+1);
    seti(geti());
    return *this;
}

Complejo Complejo::operator++(int)
{
    Complejo aux(0,0);
    aux.setr(getr()+1);
    aux.seti(geti());
    *this = aux;
    return *this;
}

/*Complejo Complejo::operator++(int)
{
    Complejo aux(0,0);
    aux.setr(getr()+1);
    aux.seti(geti()+1);
    *this = aux;
    return *this;
}*/

/*Complejo Complejo::operator--()
{
    seti(geti()-1);
    setr(getr()-1);
    return *this;
}*/

Complejo Complejo::operator--()
{
    seti(geti());
    setr(getr()-1);
    return *this;
}

/*Complejo Complejo::operator--(int)
{
    Complejo aux(0,0);
    aux.setr(getr()-1);
    aux.seti(geti()-1);
    *this = aux;
    return *this;
}*/
Complejo Complejo::operator--(int)
{
    Complejo aux(0,0);
    aux.setr(getr()-1);
    aux.seti(geti());
    *this = aux;
    return *this;
}

Complejo  Complejo::operator-() const
{
    Complejo aux(0,0);
    aux.setr(getr()*-1);
    aux.seti(geti()*-1);
    return aux;
};


bool Complejo::operator==(Complejo aux)
{
    
    if((getr() == aux.getr()) && (geti() == aux.geti()))
       {
        return true;
        }
       else
    return false;
};


