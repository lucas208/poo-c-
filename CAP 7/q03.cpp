#include <iostream>
#include <iomanip>
#define ANO 2
#define TRIMESTRE 4
using namespace std;
void exibir(double v[ANO][TRIMESTRE],int m,int n){
    double total = 0.0;
    cout <<"                                    Trimestre" << endl;;
    cout <<"                          1         2         3         4";
    for(int i =0;i<m;i++){
        cout<<"\nDespesas do ano " << i+1;
    for(int j = 0;j<n;j++){
        cout << setiosflags(ios::fixed)<< setiosflags(ios::showpoint)<<setprecision(2)<<setw(10)<< v[i][j];
        total = total +v[i][j];
    }


}
cout << endl;
cout <<"Total = "<< total << endl;
}
int main (){

double despesas[ANO][TRIMESTRE],total = 0;
for(int i =0;i<ANO;i++){
    for(int j = 0;j<TRIMESTRE;j++){
        cout<<"Insira o valor gasto no "<< j+1 << "o. trimestre do ano " <<i+1 << ": ";
        cin >> despesas[i][j];
        total = total+despesas[i][j];
    }
}
cout<<endl;
exibir(despesas,ANO,TRIMESTRE);
}
