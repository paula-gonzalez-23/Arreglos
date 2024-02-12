/*Crear un vector de n posiciones simulando el juego de buscaminas y al final mostrar cuantas minas hay*/

#include <iostream>
using namespace std;

int main(){

    int cantidad = 0;
    int contador = 0;

    cout<<"Digite la cantidad de posiciones que desea para el buscaminas: "<<endl; 
    cin>>cantidad;

    string buscaminas[cantidad];

    for (int i = 0; i < cantidad; i++){
        cout<<"Digite si hay mina o no en la posicion: "<<endl;
        cin>>buscaminas[i];
    }

    for (int i = 0; i < cantidad; i++) {
        if (buscaminas[i] == "Mina") {
            contador++;
        }
    }

    cout<<"Las minas que hay son: "<<contador<<endl;



    return 0;

}