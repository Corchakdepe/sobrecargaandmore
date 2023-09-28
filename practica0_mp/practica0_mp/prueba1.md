
#include <iostream> // std::cout, std::fixed
#include <iomanip> // std::setprecision
#include <cstdlib> // system
#include <fstream> // para trabajar con ficheros
#include "complejo.hpp" // definicion de la clase complejo
using namespace std;
int main(int argc, char *argv[])
{
    Complejo a(1,2), b(3,4) ,c(1,-3), e(6,2);
    const Complejo d(-1,-2);
    //cout << fixed << setprecision(2); //mostrar 2 (setprecision) decimales (fixed)
    a.set(a.getr()+1,-1*a.geti());
    a.ver(); cout << endl; //a = 2-2i
    cout << "a.real vale " << a.getr() << "\n"; //a.real vale 2
    b=c+d; b.ver(); cout << endl; //b = 0-5i
    b=5+c+a+2; b.ver(); cout << endl; //b =10-5i
    b=3+c+a; b.ver(); cout << endl; //b = 6-5i
    b=-3*2+b; b.ver(); cout << endl; //b = 0-5i
    c=5+c+a+2; c.ver(); cout << endl; //c = 10-5i
    a=-d; a.ver(); cout << endl; //a = 1+2i
    d.ver(); cout << endl; //d =-1-2i
    c=-c; c.ver(); cout << endl; //c =-10+5i
    a.set(); //insertar por teclado el complejo 7-2i
    a.ver(); //a = 7-2i
    cout << "a vale " << a << "\n"; //a vale 7-2i
    ofstream salida("prueba.txt");
    if (!salida.fail()) {
        salida << "a vale " << a << "\n";
        salida << "b vale " << b << "\n";
        salida << "c vale " << c << "\n";
    }
    salida.close();
    Complejo z(1,3), s(1,1);
    cout << s << ", " << z << endl; //1+1i, 1+3i
    z=-z; cout << "z = " << z << endl; //z = -1-3i
    z=2+z; cout << "z = " << z << endl; //z = 1-3i
    z=-z; cout << "z = " << z << endl; //z = -1+3i
    z.set(2,0); cout << "z = " << z << endl; //z = 2+0i
    z=-z; cout << "z = " << z << endl; //z = -2+0i
    z.set(0,2); cout << "z = " << z << endl; //z = 0+2i
    z=-z; cout << "z = " << z << endl; //z = 0-2i
    
}












-----------------------------------------


#include <iostream> // std::cout, std::fixed
#include <iomanip> // std::setprecision
#include <cstdlib> // system
#include "complejo.hpp" // definicion de la clase complejo
using namespace std;
int main(int argc, char *argv[])
{
    Complejo a(1,2), b(3), c(a), e(6,2); //b debe ser 3+0i, c es 1+2i
    const Complejo d(-1,-2);
    cout << fixed << setprecision(2); //mostrar 2 (setprecision) decimales (fixed)
    a.set(a.getr()+1,-1*a.geti());
    a.ver(); cout << endl; //a = 2-2i
    b=5+c+a; b.ver(); cout << endl; //b = 8+0i
    c=5+c+a+2; c.ver(); cout << endl; //c = 10+0i
    c=-c; c.ver(); cout << endl; //c =-10+0i
    c=d+1; c.ver(); cout << endl; //c = 0-2i
    c=d+c; c.ver(); cout << endl; //c =-1-4i
    ++a; cout << a << endl; //a = 3-2i
    a++;
    cout << b << endl; //a = 4-2i
    a.ver();
    int r = (int)a; //r = (int)
    e.set(8,0); //e = 8+0i
    if (e==b)
        cout << "e y b son iguales \n";
    else
        cout << "e y b son distintos \n";
    if (e==8)
        cout << e << " es igual a " << 8 << endl;
    b=++a;
    c=b++;
    cout << a << ", " << b << ", " << c << endl; //a=5-2i, b=6-2i, c=6-2i, c=5-2i
}


_____________________________________________________________________
main.cpp


#include <iostream>
#include "complejo.hpp"

using namespace std;

int main() {
    Complejo a(2,-3), b(5,0);
    const Complejo c(4,7);
    a.ver();
    b.ver();
    a.set(7,4);
    b.set();
    a.ver();
    b.ver();
    cout << "La parte real de a es " << a.getr() << endl;
    cout << "La parte imaginaria de a es " << a.geti() << endl;
    c.ver();
    cout << "La parte real de c es " << c.getr() << endl;
    cout << "La parte imaginaria de c es " << c.geti() << endl;
    cout << "------------\n";
    a.ver();
    b.ver();
    a=a+b; a.ver();
    a=a+2; a.ver();
    a=3+a; a.ver();

    a=b+c; a.ver();
    a=c+b; a.ver();
    a=c+2; a.ver();
    a=3+c; a.ver();

    a=-b; a.ver(); b.ver();
    a=-c; a.ver(); c.ver();
    return 0;
}

