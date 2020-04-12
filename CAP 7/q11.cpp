#include <iostream>
#include <string.h>
#define MAX 100

using namespace std;
class estoqueCelular{
private:
    char nomeFab[MAX];
    int codigoModelo;
    float custo;
public:
    void setDados(char nome[MAX],int m,float c){
    strcpy(nomeFab,nome);
    codigoModelo = m;
    custo = c;
    }
    void mostraDados(){
    cout <<"Nome do fabricante: " <<nomeFab << endl;
    cout <<"Codigo do modelo: " <<codigoModelo << endl;
    cout <<"Custo: R$" <<custo<< endl;
    cout<<endl;
    }
};


int main (){

estoqueCelular c1,c2;
c1.setDados("Nokia", 777, 117.5);
c2.setDados("Samsung", 999, 599.99);
c1.mostraDados();
c2.mostraDados();

}
