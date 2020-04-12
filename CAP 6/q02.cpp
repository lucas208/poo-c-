#include <iostream>

using namespace std;

class Medida{
private:
    int metro;
    float centimetro;

public:
    void setMedida(int m, int c){
        metro = m;
        centimetro = c;
    }
    void getMedida (){
        cout << "Entre com a qtd de metros e de centimetros " << endl;
        cin >> metro >> centimetro;
    }
    void mostraDados (){
        cout << metro+centimetro/100.0 << " metros" << endl;
    }
};

int main (){
Medida m1,m2;
m1.setMedida(50,65);
m2.getMedida();
cout << "Medida 1 = ";m1.mostraDados();
cout << "Medida 2 = ";m2.mostraDados();

}
