#include <iostream>
using namespace std;

int main(){

    //Se definen tres variables de tipo entero, x y dos punteros
    int x, *p1, *p2;

    //Se inicilizan con valor null y apuntan a la direccion de memoria null
    p1 = nullptr;
    p2 = nullptr;

    //Se le asigna 15 a la variable x
    x = 15;

    //Al puntero p1 se le asigna la direccion de memoria de la variable x y contiene "15"
    p1 = &x;

    //Al puntero p2 se le asigna el valor de p1, ahora ambos apuntan a la direccion de memoria de x y ambos contienen el valor de "15"
    p2 = p1;

    //Se imprime como queda la memoria despues de 
    cout << *p1 << endl;
    cout << *p2 << endl;

    return 0;
}