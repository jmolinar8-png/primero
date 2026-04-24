// sistema de pagos.
//El polimorfismo nos permite tener una lista de pagos y procesar
//cada uno de forma distinta (tarjeta o efectivo) sin saber exactamente que metodo
// es hata el momento de pagar

#include <iostream>
#include <vector>
#include <string>

using namespace std;
//clase base (padre)

class MetodoPago{
    public:
    //virtual permite que las hijas sobrescriban este comportamiento
    virtual void procesarPago(float monto){
        cout << "Procesando pago generico de $" << monto << "\n";

    }

    //Destructor virtual: buena practica en polimorfismo
    virtual ~MetodoPago(){}

};

//clase hija tarjeta

class Tarjeta : public MetodoPago {
public:
    void procesarPago(float monto)override {
    cout << "Pago de $" << monto << "con tarjeta (Aplica comision 3%" << endl;
    }

};
// clase hija efectivo
class Efectivo : public MetodoPago {
public:
    void procesarPago(float monto) override {
    cout << "pago de $" << monto <<" en efectivo (sin comisiones)" << endl;

    }
};

int main(){
// usamos un vector de punteros a la clase padre para guardar qualquier hijo
 vector<MetodoPago*> pasarelaDePagos;

 // llenamos el vector con diferecntes tipos de pago (polmorfismo)

 pasarelaDePagos.push_back(new Efectivo());
 pasarelaDePagos.push_back(new Tarjeta());

 cout << "------ iniciando cobros------" << endl;
 // Recorremos al vector
 for (MetodoPago * pago: pasarelaDePagos){
    //Aqui ocurre la magia: Cada objeto sabe quien es y usa su metodo
    pago->procesarPago(100.0);
 }
 for (MetodoPago * pago: pasarelaDePagos) delete pago;

 return 0;
}
