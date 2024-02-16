#include <iostream>
using namespace std;

int main(){


    int filas = 3;
    int columnas = 3;

    string triqui [filas][columnas] = {

        {"O"," ","X"},
        {" ","O","X"},
        {"X"," ","O"}

    };

    cout<<"Estado inicial del triqui"<<endl;

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){

            cout<< triqui [i][j]<<" ";

        }

        cout<<endl;
    }

    return 0;

}