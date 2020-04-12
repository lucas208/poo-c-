#include <iostream>
#include <iomanip>
#define MAX 30
using namespace std;

int main (){
char nome [] = "Antonio Mendes";
cout <<"Constante string: " << nome<<endl;

char sentenca[MAX];
cout <<"Digite uma frase qualquer: ";
cin.get(sentenca,MAX,'#');
cout << "Sentenca: "<<sentenca<<endl;
}
