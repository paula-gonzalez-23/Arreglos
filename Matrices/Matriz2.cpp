#include <iostream>
using namespace std;

int main(){

    int columnas = 0;
    int filas = 0;
    int i,j;

    cout<<"Digite la cantidad de columnas que desea en su matriz: "<<endl; 
    cin>>columnas;

    cout<<"Digite la cantidad de filas que desea en su matriz: "<<endl; 
    cin>>filas;

    string maquina [filas][columnas];


    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            
            cout<<"Ingrese el nombre y precio del producto que desea agregar: "+j<<endl;
            cin>>maquina[i][j];

            cout<<maquina[filas][columnas]<<endl;
        }
    }

}