#include <iostream>
#include <math.h>

using namespace std;
const double pi = acos(-1.0);

double areacirculo(float r){
return pi*r*r;
}
int main (){
    float r;
cout <<"Insira o valor de r " << endl;
cin >> r;
cout << "Area = " << areacirculo(r) << endl;
}
