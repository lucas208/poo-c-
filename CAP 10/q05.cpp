#include <iostream>
#define MAX 10

using namespace std;

void bublesort(int *ptr, int n){
    void ordena(int *,int *);
    for(int i = 0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        ordena(ptr+i,ptr+j);
}
void ordena (int *n1,int *n2){
if(*n1>*n2){
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}
}
void bublesort(int *, int);

int main (){
int a[MAX] = {88,99,55,77,17,66,33,11,22,44};
cout <<"Valores no array a[] antes da ordenacao: "<<endl;
for(int i =0;i<MAX;i++)
    cout<<"a["<<i<<"]: "<<a[i] << endl;

bublesort(a,MAX);

cout <<"Valores no array a[] depois da ordenacao: " << endl;
for(int i = 0;i<MAX;i++)
    cout<<"a["<<i<<"]: "<<a[i] << endl;
}
