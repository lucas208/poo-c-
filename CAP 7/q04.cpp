#include <iostream>
#define MAX 100
using namespace std;

class pilha{
private:
    int apilha[MAX];
    int topo;
public:
    pilha(){
        topo=0;
    }
    void push(int x){
    apilha[++topo] = x;
    }
    int pop(){
    return apilha[topo--];
    }
};


int main (){
pilha p;
cout<<"Dados na pilha: " << endl << endl;
p.push(100);
p.push(200);
p.push(300);
cout << "1: " <<p.pop() << endl;
cout << "2: " <<p.pop() << endl;
cout << "3: " <<p.pop() << endl;
p.push(400);
p.push(500);
cout << "4: " <<p.pop() << endl;
cout << "5: " <<p.pop() << endl;


}
