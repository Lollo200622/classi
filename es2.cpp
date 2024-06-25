//Si crei una classe rettangolo per memorizzare rettangoli e calcolarne perimetro e area, si scrivano anche due costruttori che permettano di memorizzare rispettivamente quadrati e rettangoli. Creare un programma che fa inserire le 
//lunghezze dei lati di un rettangolo e la lunghezza dei lati di un quadrato e verifica quale tra i due ha area maggiore.
#include <iostream>

using namespace std;

class Rettangolo
{
    public:
    int base;
    int altezza;
    Rettangolo(int b,int h) {
        base=b;
        altezza=h;
    }
    Rettangolo(int lato)  {
        base=lato;
        altezza=lato;
    }
    int perimetro() {
        return (base+altezza)*2;
    }
    int area()  {
        return base*altezza;
    }
};

int main(){
    cout<<"inserisci i lati di un rettangolo ";
    int l1,l2;
    cin>>l1>>l2;
    cout<<"inserisci il lato di un quadrato ";
    int l;
    cin>>l;
    
    Rettangolo r(l1,l2);
    Rettangolo q(l);
    
    if(r.area()>q.area())  {
    	cout<<"il rettangolo ha area maggiore";
    }
    else
    {
        if(r.area()<q.area()) {
        	cout<<"il quadrato ha area maggiore";}
        else
        {
            cout<<"stessa area";
        }
    }
}




