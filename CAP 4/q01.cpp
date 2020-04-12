#include <iostream>

using namespace std;

struct data{
int dia;
int mes;
int ano;
};

int main (){
    data hoje = {16,07,2018}, novadata;
    cout << "A data de hoje eh " << hoje.dia << " / " << hoje.mes << " / " << hoje.ano << endl;
    novadata = hoje;
    cout << "A nova data eh " << novadata.dia << " / " << novadata.mes << " / " << novadata.ano << endl;
}
