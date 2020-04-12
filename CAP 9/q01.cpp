#include <iostream>

using namespace std;

class Contador{
protected:
    unsigned int contador;
public:
    Contador (){
    contador = 0;
    }
    Contador(int c){
    contador = c;
    }
    int getContador(){
        return contador;
    }
    void operator ++ (){
    ++contador;
    }
    void operator ++ (int){
    contador++;
    }
};

class Decrementa : public Contador{
public:
    Decrementa (): Contador(){
   }
    Decrementa(int c) : Contador(c){
    }
    void operator -- (){
        --contador;
    }
    void operator -- (int){
        contador --;
    }

};
int main (){
    Decrementa c1, c2(10);
    c1++;
    ++c1;
    c1++;
    ++c1;
    --c1;
    c1--;
    --c1;
    --c2;c2--;--c2;c2--;
    cout <<"Valor de c1: "<<c1.getContador()<< endl;
    cout <<"Valor de c2: "<<c2.getContador()<< endl;

}
