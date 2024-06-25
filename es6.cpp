//Crea una classe derivata Cerchio dalla classe Figura 
//con un membro privato raggio e un metodo pubblico calcolaArea che calcola e restituisce l'area del cerchio.


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Cerchio {
private:
    double raggio;

public:
    void impostaRaggio(double r) {
        raggio = r;
    }

    double calcolaArea() {
        return M_PI * raggio * raggio;
    }
};

int main() {
    Cerchio c;
    double raggio;

    cout << "Inserisci il raggio del cerchio: ";
    cin >> raggio;

    c.impostaRaggio(raggio);
    double area = c.calcolaArea();

    cout << "L'area del cerchio è: " << area << endl;

    return 0;
}
  