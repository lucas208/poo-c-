#include <iostream>
#define MAX 100
using namespace std;

class Conta{
private:
    float saldo;
public:
    Conta(){
    saldo =0;
    }
    void creditar(float x){
        saldo = saldo+x;
    }
    float getsaldo(){
        return saldo;
    }

};

int main (){
    Conta c[MAX];
    int n = 0;
    float total = 0.0;
    float deposito;
    char resposta;
    cout<< "Digite o valor do deposito: ";
    cin >> deposito;
    c[n++].creditar(deposito);
    cout<<"Deseja realizar outro deposito ? (s/n): ";
    cin >> resposta;
    while(resposta!='n'){
        cout<< "Digite o valor do deposito: ";
        cin >> deposito;
        c[n++].creditar(deposito);
        cout<<"Deseja realizar outro deposito ? (s/n): ";
        cin >> resposta;
    }
    cout << endl;
    for(int i = 0;i<n;i++){
        cout<< "Valor do " << i+1 <<"o. deposito = R$" << c[i].getsaldo() << endl;
        total = total + c[i].getsaldo();
    }
    cout << endl;
    cout <<"Valor total depositado = R$"<<total << endl;
    }
