//Si crei una classe rettangolo per memorizzare rettangoli e calcolarne perimetro e area. Creare poi un programma che sfruttando la classe scriva i perimetri e le aree di 10 rettangoli,
 //il primo con lunghezze dei lati 1 e 2, il secondo con 2 e 3, il terzo con 3 e 4 e così via.

#include <iostream>

using namespace std;

class Rettangolo
{
    public:
    int l1;
    int l2;
    int perimetro()
    {
        return (l1+l2)*2;
    }
    int area()
    {
        return l1*l2;
    }
};

int main()
{
    for(int i=0;i<10;i++)
    {
        Rettangolo r;
        r.l1=i+1;
        r.l2=i+2;
        cout<<"rettangolo con lati "<<r.l1<<" "<<r.l2;
        cout<<" area : "<<r.area();
        cout<<" perimetro "<<r.perimetro()<<endl;
    }
    return 0;
}
