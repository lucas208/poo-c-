#include <iostream>

using namespace std;

class Medida
{
private:
    int metro;
    int centimetro;
public:
    Medida()
    {
        metro = 0;
        centimetro = 0;
    }
    Medida(int m,int c)
    {
        metro = m;
        centimetro = c;
    }
    void getMedida (){
    cout << "Insira a qtd de metros: ";
    cin >> metro;
    cout <<"Insira a qtd de centimetros: ";
    cin >> centimetro;
    }
    void mostraMedida (){
    cout << metro +centimetro/100.0 << " metros" << endl;
    }
    Medida operator + (Medida);
};
Medida Medida ::operator +(Medida m1){
int m = metro +m1.metro;
int c = centimetro+m1.centimetro;
if(centimetro >= 100.0){
    c=c-100;
    m++;
}
return Medida(m,c);

}


int main ()
{
Medida m3;
Medida m1 (100,25);
Medida m2 (200,88);
m3 = m1+m2;
m3.mostraMedida();

}
