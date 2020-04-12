#include <iostream>

using namespace std;
inline int quadrado (int n){
return n*n;
}
inline int cubo(int n){
return n*n*n;
}


int main (){
int n;
cout << "Digite um inteiro n" << endl;
cin >> n;
cout << "Quadrado = " << quadrado(n) <<endl;
cout << "Cubo = " << cubo(n) << endl;

}
