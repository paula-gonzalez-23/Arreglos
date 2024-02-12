/*Crear dos vectores de n cantidad de numeros, que el usuario diligencie, 
sumar los valores diligenciados por el usuario en cada vector, y comparar si son iguales o diferentes*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int cantidad = 0;
    int cantidad2 = 0;
    int suma_primer_vector = 0;
    int suma_segundo_vector = 0;

    cout<<"Digite la cantidad de numeros para el primer vector: "<<endl; 
    cin>>cantidad;

    cout<<"Digite la cantidad de numeros para el segundo vector: "<<endl; 
    cin>>cantidad2;

    
    string primer_vector[cantidad];
    string segundo_vector[cantidad2];
    

    for (int i = 0; i < cantidad; i++){
        cout<<"Digite los numeros que desea ingresar para el primer vector: "<<endl;
        cin>>primer_vector[i];
        suma_primer_vector = suma_primer_vector + primer_vector[i];
    }

    
    for (int i = 0; i < cantidad2; i++){
        cout<<"Digite los numeros que desea ingresar para el segundo vector: "<<endl;
        cin>>segundo_vector[i];
        suma_segundo_vector = suma_segundo_vector + segundo_vector[i];
    }


    if (suma_primer_vector == suma_segundo_vector){
        cout<<"Las sumas de los dos vectores son iguales"<<endl;
    } else {
        cout<<"Las sumas de los dos vectores son diferentes"<<endl;
    }


    return 0;

}

