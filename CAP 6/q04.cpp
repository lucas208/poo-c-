#include <iostream>

using namespace std;

class retangulo{
private:
    float largura;
    float comprimento;
public:
    retangulo () { //construtor
        largura = 0;
        comprimento = 0;
        }
    void atribuir (float l, float c){
        largura = l;
        comprimento = c;
    }
    float getcomprimento(){
        return comprimento;
    }
    float getlargura(){
        return largura;
    }
    float area(){
        return comprimento*largura;
    }

};

int main (){
    float l,c;
    retangulo r1;
    cout << "Insira a largura " << endl;
    cin  >> l;
    cout << "Insira o comprimento " << endl;
    cin >> c;
    r1.atribuir(l,c);
    cout << endl;
    cout << "Largura = " << r1.getlargura() << endl;
    cout << "Comprimento = " << r1.getcomprimento() << endl;
    cout << "Area = " << r1.area() << endl;

}
