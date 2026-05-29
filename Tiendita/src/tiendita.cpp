#include "tiendita.h"
#include <iostream>
#include <string>
#include <fstream>
#include<iomanip>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>

using namespace std;

tiendita::tiendita()
{
    //ctor
}

void tiendita::menu(){
    int opcion;
    char letra;

    do{
        system("cls");
        cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION PERSONAS  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso productos"<<endl;
	cout<<"\t\t\t 2. Despliegue productos"<<endl;
	cout<<"\t\t\t 3. Modifica Inventario"<<endl;
	cout<<"\t\t\t 4. Borra registro de producto"<<endl;
	cout<<"\t\t\t 5. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;

    switch(opcion)
    {
    case 1:
    	do
    	{
    		insertar();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>letra;
		}while(letra=='y'||letra=='Y');
		break;
	case 2:
		leer();
		break;
	case 3:
		modificar();
		break;
	case 4:
		borrar();
		break;
	case 5:
		exit(0);
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(opcion!= 6);
}

void tiendita::insertar()
{
	system("cls");
	fstream file;
	cout<<"\n-------------------------------------------------Agregar detalles Persona ---------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa Id del Producto        : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre del Producto     : ";
	cin>>productoN;
	cout<<"\t\t\tIngresa El Precio  : ";
	cin>>precio;
	file.open("inventario.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< productoN <<std::left<<std::setw(15)<< precio << "\n";
	file.close();
}

void tiendita::leer()
{
    system("cls");
    ifstream file;
    int total= 0;
    cout <<"n\------------- inventario de productos--------"<<endl;
    file.open("inventario.txt", ios::in);
    if(!file)
    {
        cout<<"\tNo hay ningun inventario...";
        file.close();
    }
    else{
        file >> id >> productoN >> precio;
        while(!file.eof())
        {
            total++;
            cout <<"Id producto: "<<id<<endl;
            cout <<"Nombre del producto: "<<productoN<<endl;
            cout <<"Precio del producto: "<<precio<<endl;
            file >> id >> productoN >> precio;
        }
        if(total==0){
            cout<<"\t\tNo hay informacion...";
        }
    }
    file.close();
}

void tiendita::modificar()
{
    system("cls");
    fstream file, file1;
    string id_producto;
    int found = 0;
    cout <<"---------------------------Modificacion de inventario---------------"<< endl;
    file.open("inventario.txt", ios::in);
    if(!file){
        cout<<"\tNo hay informacion..."<<endl;
    }
    else{
    cout<<"\nIngrese ID del producto que quiere modificar: ";
    cin >>id_producto;
    file1.open("temp.txt", ios::app |ios::out);
    file >> id >> productoN >> precio;
    while(!file.eof())
    {
        if(id_producto!=id){
         file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< productoN <<std::left<<std::setw(15)<< precio << "\n";
        }
        else {
            cout<<"\t\t\tIngrese Id del producto: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre del producto: ";
				cin>>productoN;
				cout<<"\t\t\tIngrese precio del producto ";
				cin>>precio;
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< productoN <<std::left<<std::setw(15)<< precio << "\n";
				found++;
        }
        file >> id >> productoN >> precio;
    }
    file1.close();
    file.close();
    remove("inventario.txt");
    rename("temp.txt","inventario.txt");
    }
}

void tiendita::borrar(){
}

tiendita::~tiendita()
{
    //dtor
}
