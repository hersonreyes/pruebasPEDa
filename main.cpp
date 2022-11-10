#include<iostream>
#include<string.h>
#include "clase.h"

using namespace std;

void agregarCelulares(){
    int n;
    int codigo;
    string marca;
    string modelo;
    double precio;
    int stock;

    cout<<"Ingrese el numero de objetos"<<endl;
    cin>>n;

    Celulares *listaCelulares[n];

    for(int i=0; i<n; i++){
        cout<<"Ingrese el codigo del celular: "<<endl;
        cin>>codigo;

        cout<<"Ingrese el la marca: "<<endl;
        cin>>marca;

        cout<<"Ingrese el modelo del celular: "<<endl;
        cin>>modelo;

        cout<<"Ingrese el precio del celular: "<<endl;
        cin>>precio;

        cout<<"Ingrese el stock: "<<endl;
        cin>>stock;

        listaCelulares[i] = new Celulares(codigo, marca, modelo, precio, stock);
        cout<<"producto agregado"<<endl;
        
        listaCelulares[i]->mostrar();

    }

}

int main(){
    Celulares celular1;

    /* Esto inserta un solo celular
    celular1.setCodigo(234);
    celular1.setMarca("Samsung");
    celular1.setModelo("A30");
    celular1.setPrecio(200);
    celular1.setStock(100);
    */

    //esto agrega una lista de Celulares
    agregarCelulares();
    

}