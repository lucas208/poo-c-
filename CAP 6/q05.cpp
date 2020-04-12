#include <iostream>

using namespace std;

class contagem {
private:
    static int contador;
public:
    contagem(){
    contador++;
    }
    int getcontador(){
        return contador;
    }

};

int contagem::contador; // vinculação necessária entre o contador e a classe, provavelmente para atualizá-lo
//exigencia do tipo static, definir fora da classe porque a especificação da classe é apenas uma declaração
//não ha alocaçao de memória

int main (){
contagem c1,c2,c3;
cout << "Criando 3 objetos... " << endl;
cout<< "Contador em c1 = " << c1.getcontador() << endl;
cout<< "Contador em c2 = " << c2.getcontador() << endl;
cout<< "Contador em c3 = " << c3.getcontador() << endl;
cout<< endl;
cout<<"Criando mais um objeto... "<< endl;
contagem c4;
cout << "Contador em c4 = " << c4.getcontador() << endl;
cout<< "Contador em c3 = " << c3.getcontador() << endl;
cout<< "Contador em c2 = " << c2.getcontador() << endl;
cout<< "Contador em c1 = " << c1.getcontador() << endl;

}
