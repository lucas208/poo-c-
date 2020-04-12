#include <iostream>

using namespace std;

class Contador{
private:
    unsigned int contador;
public:
    Contador (){
    contador = 0;
    }
    int getContador(){
        return contador;
    }
    void operator ++ (){
    ++contador;
    }
    void operator ++ (int){
    contador++;
    }
};

int main (){
    Contador c1,c2,c3;
    cout << "C1 antes = " << c1.getContador() << endl;
    cout << "C2 antes = " << c2.getContador() << endl;
    cout << "C3 antes = " << c3.getContador() << endl;
    c1++;
    ++c2;
    c2++;
    ++c2;
    c3 = c2;
    cout << endl;
    cout << "C1 depois = " << c1.getContador() << endl;
    cout << "C2 depois = " << c2.getContador() << endl;
    cout << "C3 depois = " << c3.getContador() << endl;

}
