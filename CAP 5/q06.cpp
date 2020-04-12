#include <iostream>

using namespace std;

int quadrado(int n){
return n*n;
}
float quadrado(float n){
return n*n;
}
int main (){
    int n1;
    float n2;
cout << "Digite um inteiro " << endl;
cin >> n1;
cout <<"Quadrado = "<< quadrado(n1)<< endl;
cout<< "Digite um real " << endl;
cin >> n2;
cout<<"Quadrado = " << quadrado(n2)<< endl;

}
