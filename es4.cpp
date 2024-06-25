#include <iostream>
#include <string>

class Persona {
public:
    std::string cognome;
    std::string nome;
    int eta;

  
    Persona(const std::string &cognome, const std::string &nome, int eta)
        : cognome(cognome), nome(nome), eta(eta) {}
};

int main() {
    std::string cognome, nome;
    int eta;

    std::cout << "Inserisci i dati della prima persona:" << std::endl;
    std::cout << "Cognome: ";
    std::cin >> cognome;
    std::cout << "Nome: ";
    std::cin >> nome;
    std::cout << "Età: ";
    std::cin >> eta;
    Persona persona1(cognome, nome, eta);


    std::cout << "Inserisci i dati della seconda persona:" << std::endl;
    std::cout << "Cognome: ";
    std::cin >> cognome;
    std::cout << "Nome: ";
    std::cin >> nome;
    std::cout << "Età: ";
    std::cin >> eta;
    Persona persona2(cognome, nome, eta);

 
    if (persona1.eta == persona2.eta) {
        std::cout << "Le due persone sono coetanee." << std::endl;
    } else {
        std::cout << "Le due persone non sono coetanee." << std::endl;
        if (persona1.eta < persona2.eta) {
            std::cout << "La persona più giovane è:" << std::endl;
            std::cout << "Cognome: " << persona1.cognome << ", Nome: " << persona1.nome << ", Età: " << persona1.eta << std::endl;
        } else {
            std::cout << "La persona più giovane è:" << std::endl;
            std::cout << "Cognome: " << persona2.cognome << ", Nome: " << persona2.nome << ", Età: " << persona2.eta << std::endl;
        }
    }

    return 0;
}

