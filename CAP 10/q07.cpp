#include <iostream>
#include <stack>
using namespace std;
int main (){
stack<int>pilha;
int entrada;
cout<<"Digite inteiros ou 's' para sair" << endl;
while(cin>>entrada){
    pilha.push(entrada);
}
cout<<"Conteudo da pilha" << endl;
while(!pilha.empty()){
    cout<<pilha.top() << endl;
    pilha.pop();
}
cout<<endl;
}
