#include <iostream>
#define MAX 100

using namespace std;

int main (){
double soma = 0.0;
double *a;
a = new double[MAX];
int n;
cout<<"Insira um valor para n: ";
cin>>n;

for(int j = 0;j<n;j++){
    cin>>*(a+j);
}
for(int j = 0;j<n;j++){
    soma = soma +*(a+j);
}
cout<<endl;
cout <<"Total = " << soma<< endl;
cout<<"Media = "<< soma/n << endl;
delete [] a;
}
