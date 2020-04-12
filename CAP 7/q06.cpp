#include <iostream>
#include <iomanip>
#define MAX 30

using namespace std;

int main (){
char nome[MAX];
cout << "Digite um nome: ";
cin >>setw(MAX)>> nome;
cout << "Voce digitou: " << nome << endl;

}
