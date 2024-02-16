#include <iostream>
using namespace std;

int main(){

    int columnas = 0;
    int filas = 0;

    cout<<"Digite la cantidad de columnas que desea en su matriz: "<<endl; 
    cin>>columnas;

    cout<<"Digite la cantidad de filas que desea en su matriz: "<<endl; 
    cin>>filas;

    string maquina [filas][columnas];


    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            
            cout<<"Ingrese el nombre y precio del producto que desea agregar ["<<i<<"]["<<j<<"]: "<<endl;
            cin>>maquina[i][j];

            
        }
    }

    cout<<"Matriz Resultante"<<endl;
    
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){

            cout<<maquina [i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;

}