#include <iostream>
#include <math.h>

using namespace std;
void fracao(double n, double& nint, double& nfracao){
    nint = int(n);
    nfracao = n - nint;
}
void lognatural(double n,double& logn){
logn = log(n);
}
int main (){
double n,a,b,c;
cout << "Insira um valor real " << endl;
cin >> n;
fracao(n,a,b);
lognatural(n,c);
cout <<"Parte inteira = " << a <<endl;
cout <<"Parte fracionaria = " << b <<endl;
cout <<"Logaritmo natural = " << c <<endl;
}
