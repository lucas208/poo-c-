#include <iostream>
#include <iomanip>
#define MAX 10

using namespace std;
//bool criou;
class ArraySeguro{
private:
    int array[MAX];
public:
    int& operator[](int n){
        if(n<0||n>=MAX){
            cout<<"Indice excede o valor maximo" << endl;
            //criou = false;
        }
        else{
        return array[n];
        //criou = true;
        }
    }
};
int main (){
    int n = 10;
    ArraySeguro array1;
    //cout << criou;
   // if(criou == 0){
    for (int i = 0;i<n;i++){
        array1[i]=i*i;
    }
    cout << "Elemento Valor quadrado \n";
    for(int j=0;j<n;j++){
        int x = array1[j];
        cout<< j << setw(11) << x << endl;
    }

}

