#include<iostream>
#include<fstream>
#include "validacionpagos0.cpp"
#include "validacionpagos0.h"
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std:

    class registroTarjeta{
    public:
    void menu();
    void desplegar();
    void modificar();
    void borrar();
    };


    void registroTarjeta::menu()
    {
    int choice;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION PERSONAS  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Despliegue de tarjetas"<<endl;
	cout<<"\t\t\t 2. Modifica "<<endl;
	cout<<"\t\t\t 4. Borra registro de tarjetas"<<endl;
	cout<<"\t\t\t 5. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>choice;

     switch(choice)
    {
    case 1:
		desplegar();
		break;
	case 2:
		modificar();
		break;
	case 3:
		borrar();
		break;
	case 4:
		exit(0);
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	cout <<"\n\nPresiona cualquier tecla para continuar...";
	getch();
    }while(choice!= 4);

    }

void registroTarjeta::desplegar() {
    system("cls");
    fstream file;

    cout << "--- Listado de Tarjetas ---" << endl;
    file.open("tarjetadedebito.txt", ios::in);
    if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> numeroTarjeta >> nombre;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Numero Tarjea "<<numeroTarjeta<<endl;
			cout<<"\t\t\t Nombre Persona: "<<nombre<<endl;
			file >> numeroTarjeta >> nombre;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}
}

void registroTarjeta::modificar() {
    system("cls");
    cout << "--- Modificar Registro ---" << endl;
    // Aquí irá la lógica del archivo temporal
}

void registroTarjeta::borrar() {
    system("cls");
    cout << "--- Borrar Registro ---" << endl;
    // Aquí irá la lógica de eliminar línea
}


int main(){
    registroTarjeta sistema; // Creamos el objeto
    sistema.menu();          // Llamamos al menú
    return 0;

}
