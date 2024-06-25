//Crea una classe base Figura con un membro protetto colore e un metodo pubblico impostaColore 
//che imposta il colore della figura.


#include <iostream>
#include <string>

using namespace std;



class Figura {
	private: 
		std::string colore;


	public: 
		void impostacolore(string newcolore){
			colore = newcolore; 
		}
} ;


int main () {
		
		Figura f;
		f.impostacolore("rosso");


		return 0; 
	}


