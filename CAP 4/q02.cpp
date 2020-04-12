#include <iostream>

using namespace std;

struct medida{
    double metro;
    double centimetro;
};
struct terreno{
 medida largura;
 medida comprimento;
};

int main (){
    terreno novoterreno;
    double area;
    cout<<"Informe a quantidade de metros e centimetros da largura do terreno, respectivamente " << endl;
    cin >> novoterreno.largura.metro >> novoterreno.largura.centimetro;
    cout<<"Informe a quantidade de metros e centimetros do comprimento do terreno, respectivamente " << endl;
    cin >> novoterreno.comprimento.metro >> novoterreno.comprimento.centimetro;
    area = (novoterreno.largura.metro+novoterreno.largura.centimetro/100)*(novoterreno.comprimento.metro+novoterreno.comprimento.centimetro/100);
    cout << "A area do terreno informado eh " << area << " metros quadrados" <<endl;

}
