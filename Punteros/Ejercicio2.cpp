#include <iostream>
using namespace std;

int main(){

    //Se definen 5 variables de tipo entero, dos punteros y A con valor de 1, B con valor de 2 y C con valor de 3
    int A = 1, B = 2, C = 3, *p1, *p2;

    //p1 apunta a la direccion de memoria de A
    p1 = &A;

    //p2 apunta a la direccion de memoria de C
    p2 = &C;

    //p2 apunta a la direccion de memoria de C y se le asigna a p1 luego p2 se incrementa en 1
    *p1 = (*p2)++;

    //Ahora p1 apunta a la direccion de memoria de C
    p1 = p2;

    //p2 apunta a la direccion de memoria de B
    p2 = &B;

    //El valor en la direccion de C "p1", se resta con el valor en la direccion de B "p2"
    *p1 -= *p2;

    //El valor de la direccion de B se incrementa en 1
    ++*p2;
    
    //El valor en la direccion de C se multiplica por el valor en la direccion de B
    *p1 *= *p2;

    //Se incrementa en 1 el valor de la direccion de B, el resultado se multiplica por el valor de la direccion de C y se le asigna a A
    A = ++*p2 * *p1;

    //p1 apunta a la direccion de A
    p1 = &A;

    //Se divide el valor de la direccion de A por el valor en la direccion de B y el resultado se asigna al valor de la direccion de B
    *p2 = *p1 /= *p2;

    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    return 0;

}