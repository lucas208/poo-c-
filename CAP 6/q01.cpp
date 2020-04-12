#include <iostream>

using namespace std;

class estoqueCelular{

private:
    int codf;
    int codm;
    float custo;

public:
    void setDados (int f,int m, float c){
        codf = f;
        codm = m;
        custo = c;
    }
    void mostraDados(){
    cout <<"Codigo de fabrica = " << codf << endl;
    cout <<"Codigo do modelo = " << codm << endl;
    cout <<"Custo = R$ " << custo << endl;
    }

};


int main (){

estoqueCelular cel1, cel2;
cel1.setDados(1234,777,117.5);
cel2.setDados(4567,999,599.99);
cel1.mostraDados();
cout<<endl;
cel2.mostraDados();

}
