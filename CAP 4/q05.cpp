#include <iostream>

using namespace std;

struct tempo{
    int hora;
    int minuto;
    int segundo;
};
int main (){
    tempo t1 = {1,59,40};
    tempo t2 = {9,30,27};
    int s = 0,m = 0, h = 0;
    s = t1.segundo + t2.segundo;
    m = t1.minuto+t2.minuto;
    h = t1.hora+t2.hora;
    if(s>60){
        s = s-60;
        m++;
    }
    if(m>60){
        m = m-60;
        h++;
    }
    cout << "Soma = " << h << " : " << m << " : "<<s << endl;
}
