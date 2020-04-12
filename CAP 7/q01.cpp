#include <iostream>
#define MAX 60
using namespace std;

int main (){

double nota[MAX],total = 0,n = 0;
for(int i = 0;i<MAX;i++){
    cout << "Insira a " << i+1 << " nota: ";
    cin >> nota[i];
    if(nota[i] == -1){
        break;
    }
     else
    total = total+nota[i];
    n++;
}
cout<< endl;
if(n!=0){
for(int i = 0;i<n;i++){
cout << "Nota " << i+1 << " = " << nota[i] << endl;
}
cout << endl;
cout << "Media = " <<total/n << endl;
}
else
    cout<< "Voce nao digitou nota alguma" << endl;
}
