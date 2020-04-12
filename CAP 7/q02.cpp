#include <iostream>

using namespace std;

int main (){
int n,total = 0;;
int faltas[] = {1,3,4,5,6,7,2,3,1,4,5,2,1,0,0,1,2,2,3,4};
cout <<"Insira o numero do aluno, 1 a 20 " << endl;
cin >> n;
cout <<"O aluno numero "<< n << " possui " << faltas[n-1] << " faltas" << endl;
for (int i = 0;i<20;i++){
    total = total+faltas[i];
}
cout << "Total de faltas da turma = "<< total<< endl;
cout << "Media de faltas da turma = "<< total/20.0 << endl;
}
