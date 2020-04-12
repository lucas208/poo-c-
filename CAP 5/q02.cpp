#include <iostream>

using namespace std;

void exibelinha (char c, int n){
for (int i = 0;i<n;i++){
cout<<c;
}
cout<<endl;
}

int main (){
char c;
int n;
cout << "Insira o caractere desejado para a funcao e o numero de vezes, respectivamente" << endl;
cin>>c>>n;
exibelinha(c,n);
cout<<"Nome do aluno      Nota"<< endl;
exibelinha(c,n);
cout<<"Antonio            9.0"<< endl;
cout<<"Maria              8.0"<< endl;
cout<<"Pedro              7.0"<< endl;
exibelinha(c,n);
}
