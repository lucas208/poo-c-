#include <iostream>
#include <string.h>
#define MAX 100

using namespace std;

int main (){
char sentenca1[] = "Frase qualquer";
char sentenca2[MAX];
for(int i = 0;i<strlen(sentenca1);i++){
    sentenca2[i]=sentenca1[i];
}
sentenca2[strlen(sentenca1)+1]='\0';

cout << "Sentenca 2: " <<sentenca2 <<endl;
cout << "Tam sentenca 1: " << strlen(sentenca1) << endl;
cout << "Tam sentenca 2: " << strlen(sentenca2) << endl;
}
