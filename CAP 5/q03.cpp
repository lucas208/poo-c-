#include <iostream>

using namespace std;

double fatorial(int n){
if(n==1)
    return 1;
else
    return n*fatorial(n-1);

}
double combina(int m, int n){
    return fatorial(m)/((fatorial(m-n))*fatorial(n));
}
double permuta (int m, int n){
    return fatorial(m)/fatorial(m-n);
}
int main (){
int m, n;
cout<< "Digite um valor entre 5 e 50" <<endl;
cin >> m;
while(m<5||m>50){
    cout << "Numero fora da faixa, tente novamente" << endl;
    cin >>m;
}
cout<< "Digite um valor entre 2 e 10" <<endl;
cin >> n;
while(n<2||n>10){
    cout << "Numero fora da faixa, tente novamente" << endl;
    cin >>n;
}

cout << "Numero de combinacoes: " <<combina(m,n) << endl;
cout << "Numero de permutacoes: " <<permuta(m,n) << endl;
}
