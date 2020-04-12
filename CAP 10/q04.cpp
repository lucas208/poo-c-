#include <iostream>
#define MAX 10

using namespace std;

int main (){
    int *intptr;
    intptr = new int[MAX];
    for(int j = 0;j<MAX;j++){
        intptr[j] = j*j;
    }
    for(int j = 0;j<MAX;j++){
        cout <<*(intptr+j) << endl;
    }
    cout << endl;
    delete [] intptr;
    cout <<"Desalocando memoria ... " << endl;
    cout << endl;
    for(int j = 0;j<MAX;j++){
        cout <<*(intptr+j) << endl;
    }
}
