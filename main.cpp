#include<iostream>
#include<string.h>
#include<clase.h>

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

    }

}

int main(){
    Celulares celular1;

    celular1.setCodigo(234);
    celular1.setMarca("Samsung");

    celular1.getCodigo();
    celular1.getMarca();

}