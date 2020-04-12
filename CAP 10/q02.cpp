#include <iostream>

using namespace std;

int main (){
int x = 1;
int y = 3;
int *xptr, *yptr;
xptr = &x;
yptr = &y;
cout << "Antes: " << endl;
cout << *xptr <<"  "<<xptr<< endl;
cout<<*yptr <<"  " << yptr << endl;
*xptr = *xptr*10;
*yptr = *yptr + 20;

cout << "Depois: " << endl;
cout << *xptr <<"  "<<xptr<< "  " << x <<endl;
cout<<*yptr <<"  " << yptr<< "  " << y <<endl;
cout <<"Soma de x + y = " << *xptr + *yptr << endl;
}
