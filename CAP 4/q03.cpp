#include <iostream>

using namespace std;

int main (){
enum diasdasemana {seg,ter,qua,qui,sex,sab,dom};
diasdasemana dia1,dia2;
dia1 = seg;
dia2=qua;
int diferenca = dia2-dia1;
cout << "Existem " << diferenca << " dias entre seg e qua " << endl;
    if (dia1<dia2)
    cout <<"dia 1 acontece antes de dia 2" << endl;
    else
    cout <<"dia 2 acontece antes de dia 1" << endl;
}
