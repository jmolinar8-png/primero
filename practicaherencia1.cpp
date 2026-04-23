#include <iostream>
using namespace std;

class Animal {
   public:
      bool vivo = true;
      void comer() {
      std::cout << "Comiendo...\n" << endl;
   }
};

class Perro : public Animal {
 public:
     void ladrar () {
     cout <<"ladrando" << endl;
     }
};

class Gato : public Animal {
 public:
     void maullido() {
      cout << "Maullando" << endl;
      }
};


int main() {
   Perro perro;
   Gato gato;

   perro.ladrar();
   cout << perro.vivo << endl;
   gato.maullido();
   gato.comer();

   return 0;
}

