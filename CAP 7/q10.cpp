#include <iostream>
#include <string.h>
#define MAX 100
#define DIAS 7

using namespace std;

int main (){
char dias[DIAS][MAX] = {"segunda","terca","quarta","quinta","sexta","sabado","domingo"};
for(int i = 0;i<DIAS;i++){
    cout <<dias[i]<<endl;
}

}
