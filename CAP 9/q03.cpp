#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

class Estudante{
private:
    char universidade[MAX];
    char titulo[MAX];
public:
    void lerDadosE(){
    cout<<"Insira a universidade: ";
    cin.get(universidade,MAX);
    cin.ignore();
    cout<<"Insira a titulacao: ";
    cin.get(titulo,MAX);
    cout<<endl;
    }
    void mostraDadosE(){
        cout<<"Universidade: " << universidade<<endl;
        cout<<"Titulacao: " << titulo << endl;
    }

};
class Funcionario
{
protected:
    char nome[MAX];
    unsigned long int id;
public:
    void lerDados ()
    {
        cout <<"Digite o nome do funcionario: ";
        cin.get(nome,MAX);
        cout<<"Insira sua ID: ";
        cin >>id;
    }
    void mostraDados ()
    {
        cout <<"Nome: "<<nome<<endl;
        cout<<"Id: "<<id<<endl;
    }
};
class Gestor : private Funcionario,private Estudante
{
private:
    char cargo[MAX];
    double salario;
public:
    void lerDados()
    {
        Funcionario :: lerDados();
        cin.ignore();
        cout <<"Informe seu cargo: ";
        cin.get(cargo,MAX);
        cout<<"Informe seu salario: ";
        cin>>salario;
        cin.ignore();
        Estudante::lerDadosE();
        cout<<endl;
    }
    void mostraDados ()
    {
        Funcionario :: mostraDados();
        cout <<"Cargo: " << cargo << endl;
        cout <<"Salario: R$ " << salario << endl;
        Estudante::mostraDadosE();
    }
};
class Professor : private Funcionario, private Estudante
{
private:
    int qtd;
public:
    void lerDados()
    {
        cin.ignore();
        Funcionario :: lerDados();
        cout<<"Informe a qtd de cursos lecionados: ";
        cin>>qtd;
        cin.ignore();
        Estudante ::lerDadosE();
        cout<<endl;
    }
    void mostraDados ()
    {
        Funcionario :: mostraDados();
        cout<<"Total de cursos lecionados: " << qtd << endl;
        Estudante::mostraDadosE();
    }
};
class Tecnico : public Funcionario
{
public:
    void lerDados(){
    cin.ignore();
    Funcionario ::lerDados();
    }
};
class TecnicoAdm : public Tecnico{
private:
    double horas;
public:
    void lerDados(){
    Tecnico::lerDados();
    cout<<"Insira o numero de horas extras: ";
    cin >> horas;
    cout << endl;
    }
    void mostraDados(){
    Tecnico::mostraDados();
    cout<<"Horas extras: " << horas<< endl;
    }
};


int main ()
{
Gestor g1;
Professor p;
Tecnico t;
TecnicoAdm t1;
g1.lerDados();
p.lerDados();
t.lerDados();
cout<<endl;
t1.lerDados();
cout<<endl;
cout<<"//////////////////////////////////////////////////////////////////////"<<endl;
cout<<endl;
g1.mostraDados();
cout<<endl;
p.mostraDados();
cout<<endl;
t.mostraDados();
cout<<endl;
t1.mostraDados();
cout<<endl;

}
