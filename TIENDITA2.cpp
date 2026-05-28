#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

class producto {
public:
    void mostrarMenu();
    void cargarDatos();
    void guardarDatos();
    void registrarBitacora();

    void crearProducto();
    void leerProductos();
    void actualizarProducto();
    void eliminarProducto();
private:
    vector <int> codigos;
    vector <string> nombres;
    vector <double> precios;

};

void producto::mostrarMenu(){
    int opcion;
    char x;
    do{
        system("cls");

	cout<<"\t\t--------------------------------------"<<endl;
	cout<<"\t\t |   SISTEMA CREACION DE INVENTARIO  |"<<endl;
	cout<<"\t\t--------------------------------------"<<endl;
	cout<<"\t\t 1. Creación de Inventario"<<endl;
	cout<<"\t\t 2. Desplegar Inventario"<<endl;
	cout<<"\t\t 3. Modificar Inventario"<<endl;
	cout<<"\t\t 4. Borrar Productos"<<endl;
	cout<<"\t\t 5. Exit"<<endl;

	cout<<"\t\t--------------------------------------"<<endl;
	cout<<"\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	cout<<"\t\t--------------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin >> opcion;
    switch(opcion)
    {
    case 1:
    	do
    	{
    		crearProducto();
    		cout<<"\n\t\t Agrega otra persona(Y,N): ";
    		cin>> x;
		}while(x=='y'||x=='Y');
		break;
	case 2:
		leerProductos();
		break;
	case 3:
		actualizarProducto();
		break;
	case 4:
		eliminarProducto();
		break;
	case 5:
		exit(0);
		break;
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez.." << endl;
	}
	system("pause");
    }while(opcion!= 6);
    }

void producto::crearProducto(){
    string nombre;
    int codigo;
    double precio;

    cout <<"\tIgrese el codigo del producto: "<< endl;
    cin >>codigo;
    cout <<"\tIngrese el nombre del producto: " << endl;
    cin.ignore();
    getline(cin, nombre);
    cout <<"\tIngrese el precio del producto: " << endl;
    cin >> precio;

    codigos.push_back(codigo);
    nombres.push_back(nombre);
    precios.push_back(precio);
    cargarDatos();
    cout <<"\tInformacion cargada al inventario"<< endl;
}
void producto::cargarDatos()
{

       fstream file;
        file.open("productos.txt" , ios::app|ios::out);
        if(file.is_open()){

                for(size_t i = 0; i < codigos.size(); i++){
                    file << left << codigos[i] << left << "  ,    " << nombres[i] << left << "  ,    " << precios[i] << endl;
                }
                file.close();
}

}

void producto::leerProductos(){
    system("cls");
     ifstream file;
     file.open("productos.txt",ios::in);
     cout << "\n\t--- INVENTARIO DE PRODUCTOS ---" << endl;
    if (!file.is_open()) {
        cout << "\tEl inventario esta vacio." << endl;
        return;
    }
    codigos.clear();
    nombres.clear();
    precios.clear();

    string linea;
    while(getline(file,linea)){
        stringstream ss(linea);
        string lcodigo, lnombre, lprecio;

        getline(ss, lcodigo, ',');
        getline(ss, lnombre, ',');
        getline(ss, lprecio, ',');

        if(!lcodigo.empty()){

            codigos.push_back(stod(lcodigo));
            nombres.push_back(lnombre);
            precios.push_back(stod(lprecio));
        }
    }
    file.close();

    if(codigos.empty()){
        cout <<"\rElinventario esta vacio." << endl;
        return;
    }
    for (size_t i = 0; i < codigos.size(); i++) {
        cout << "\tID: " << codigos[i]
             << " | Producto: " << nombres[i]
             << " | Precio: Q" << precios[i] << endl;
    }

    cout << "\t-------------------------------" << endl;

}
void producto::actualizarProducto(){
}
void producto::eliminarProducto(){
}

int main()
{
    producto inventario;
    inventario.mostrarMenu();

}

