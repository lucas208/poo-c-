#include <iostream>
#include <string.h>

#define MAX 100

using namespace std;

class String{
private:
    char string[MAX];
public:
    String (){
        strcpy(string,"");
    }
    String (char s[]){
    strcpy(string,s);
    }
    void mostraString (){
        cout << string;
    }
    String operator + (String argString){
    String aux;
    if (strlen(string)+strlen(argString.string)<MAX){
        strcpy(aux.string,string);
        strcat(aux.string,argString.string);
    }
    else{
        cout <<"Ocorreu overflow de string";
    }
    return aux;
    }

};
int main (){
String s1 = "Lucas Otavio ";
String s2 = "Vieira";
String s3 = s1+s2;
s3.mostraString();


}
