#include <iostream>

using namespace std;

inline float converte(float n){
return n*3.84;
}

int main (){
 float r;

 cout << "Insira o valor em dolar" << endl;
 cin >> r;
 cout <<"Valor em reais = " <<converte(r) << endl;


}
