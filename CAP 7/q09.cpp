#include <iostream>
#include <string.h>
#define MAX 100

using namespace std;

int main (){
char sentenca1[] = "Frase qualquer";
char sentenca2[MAX];
strcpy(sentenca2,sentenca1);
cout <<"Sentenca 2: " << sentenca2 << endl;
cout <<"Tamanho sentenca 1: "<< strlen(sentenca1) << endl;
cout <<"Tamanho sentenca 2: "<< strlen(sentenca2) << endl;

}
