


#include <iostream>

class Media {
public: 
    int n1;
    int n2;

 	 Media(int num1, int num2) : n1(num1), n2(num2) {}

    int  calcolaMedia() {
        return (n1 + n2) / 2.0;
    }
};

int main() {
    int n, m;

    std::cout << "Inserisci valore 1: " << std::endl;
    std::cin >> n;

    std::cout << "Inserisci valore 2: " << std::endl;
    std::cin >> m;

    Media media(n, m);
    std::cout << "La media è: " << media.calcolaMedia() << std::endl;

    return 0;
}
