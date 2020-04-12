#include <iostream>

using namespace std;

double & obterhoras (int d){
double h = 24.0*d;
double &horas = h;
return horas;

}
int main (){
int n;
cout << "Insira o numero de dias " << endl;
cin >> n;
double horas = obterhoras(n);
cout <<"Quantidade de horas = " << horas << endl;


}
