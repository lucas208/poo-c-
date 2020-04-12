#include <iostream>

using namespace std;

int main (){

int x = 5, y = 10,x1 = 10;
int *x1ptr;
x1ptr = &x1;
cout << *x1ptr <<"  "<< x1ptr << endl;
cout <<"X: " << x <<" /// Endereco: " <<&x << endl;
cout <<"Y: " << y <<" /// Endereco: " <<&y << endl;


}
