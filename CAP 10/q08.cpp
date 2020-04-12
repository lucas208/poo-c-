#include <iostream>
#include <queue>
using namespace std;
int main (){
    queue <int> fila;
    int entrada;
    cout<<"Digite inteiros ou 's' para sair" << endl;
    while(cin>>entrada){
        fila.push(entrada);
    }
    cout<<"Conteudo da fila" << endl;
    while(!fila.empty()){
        cout<<fila.front()<< endl;
        fila.pop();
    }
    cout<<endl;
}
