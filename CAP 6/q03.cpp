#include <iostream>

using namespace std;

class conta{
private:
    float saldo;
public:
    conta (){
    saldo = 0;
    }
    void creditar(float x){
        saldo = saldo + x;
    }
    float getsaldo(){
        return saldo;
    }

};

int main (){

float deposito;
conta c1,c2;
cout << "Saldo da conta 1 = " << c1.getsaldo() << endl;
cout << "Saldo da conta 2 = " << c2.getsaldo() << endl;
c1.creditar(777.99);
c2.creditar(255.55);
cout << endl;
cout << "Saldo da conta 1 = " << c1.getsaldo() << endl;
cout << "Saldo da conta 2 = " << c2.getsaldo() << endl;
cout << endl;
cout << "Digite quanto voce quer creditar na conta 2 " << endl;
cin >> deposito;
c2.creditar(deposito);
cout << endl;
cout << "Saldo da conta 1 = " << c1.getsaldo() << endl;
cout << "Saldo da conta 2 = " << c2.getsaldo() << endl;


}
