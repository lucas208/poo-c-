#include <iostream>
#define MAX 3
using namespace std;

class pilha{
protected:
    int apilha[MAX];
    int topo;
public:
    pilha(){
        topo=-1;
    }
    void push(int x){
    apilha[++topo] = x;
    }
    int pop(){
    return apilha[topo--];
    }
};
class pilha2 : public pilha{
public:
    void push (int x){
    if(topo >= MAX - 1)
        cout <<"Erro: a pilha esta cheia" << endl;
    else
        pilha::push(x);
    }
    int pop(){
        if (topo <0)
            cout <<"Erro, pilha vazia" << endl;
        else
            return pilha::pop();
    }
};

int main (){
    pilha2 p;
    p.push(100);
    p.push(200);
    p.push(300);
    cout <<"1: " << p.pop() << endl;
    cout <<"2: " << p.pop() << endl;
    cout <<"3: " << p.pop() << endl;
    p.push(400);
    p.push(500);
    p.push(600);
    p.push(700);
    cout <<"4: " << p.pop() << endl;
    cout <<"5: " << p.pop() << endl;
    cout <<"6: " << p.pop() << endl;
}
