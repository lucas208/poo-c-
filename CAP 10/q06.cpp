#include <iostream>
#include <list>
using namespace std;

int main (){
    list<int>lista;
    list<int>::iterator i;

    int entrada;
    i = lista.begin();

    cout<<"Digite valores inteiros ou 's' para sair: " << endl;

    while(cin>>entrada){
        lista.insert(i,entrada);
        ++i;
    }
    lista.sort();
    cout<<"Lista Ordenada: " << endl;
    for (i=lista.begin();i!=lista.end();++i){
        cout<<*i << endl;
    }
    cout<< endl;
}
