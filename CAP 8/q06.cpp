#include <iostream>
#define taxapes 3.2808

using namespace std;

class Medida{
private:
    double metros;
public:
    Medida (){
        metros = 0;
    }
    Medida(double m){
    metros = m;
    }
    void mostraMedida (){
    cout << metros <<endl;
    }
    operator double (){
        return metros*taxapes;
    }
    friend double quadrado (Medida);

};
double quadrado(Medida m){
return m.metros*m.metros;
}

int main (){
Medida m1 (10.0);
m1.mostraMedida();
double pes = double(m1);
Medida m2 (pes);
m2.mostraMedida();
Medida m3 (quadrado(m1));
m3.mostraMedida();

}
