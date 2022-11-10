#include<iostream>
#include <string.h>

using namespace std;

class Celulares {

    //Atributos: Privados Metodos:Publicos

    //atributos
    private:
     int codigo;
     string marca;
     string modelo;
     double precio;
     int stock;

    //Metodos
    public:
        Celulares();
        Celulares(int, string, string, double, int);

        //Devolver Stock
        int getStock();
        //Modificar el stock
        void setStock(int num);

        string getMarca();
        void setMarca(string brand);

        string getModelo();
        void setModelo(string model);

        double getPrecio();
        void setPrecio(double price);

        int getCodigo();
        void setCodigo(int code);

        void mostrar();

};

Celulares::Celulares(){}
Celulares::Celulares(int _codigo, string _marca, string _modelo, double _precio, int _stock){
    codigo = _codigo;
    setMarca(_marca);
    setModelo(_modelo);
    setPrecio(_precio);
    setStock(_stock);
};

void Celulares::setCodigo(int code){
    codigo = code;
}

int Celulares::getCodigo(){
    return codigo;
}

void Celulares::setMarca(string brand){
    marca = brand;
}

string Celulares::getMarca(){
    return marca;
}

void Celulares::setModelo(string model){
    modelo = model;
}

string Celulares::getModelo(){
    return modelo;
}

void Celulares::setPrecio(double price){
    precio = price;
}

double Celulares::getPrecio(){
    return precio;
}


void Celulares::setStock(int number){
    stock = number;
}

int Celulares::getStock(){
    return stock;
}

void Celulares::mostrar(){
    cout<<"****PRODUCTO****"<<endl;
    cout<<"codigo: "<<codigo<<endl;
    cout<<"marca: "<<marca<<endl;
    cout<<"modelo: "<<modelo<<endl;
    cout<<"precio: "<<precio<<endl;
    cout<<"stock: "<<stock<<endl;
}