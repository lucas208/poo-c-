#include <iostream>
#include <string.h>
#define MAX 100

using namespace std;
enum meuBoolean{falso,verdadeiro};

class String{
private:
    char string[MAX];
public:
    String (){
    strcpy(string,"");
    }
    String(char s[]){
    strcpy(string,s);
    }
    void mostraString (){
    cout << string;
    }
    void getString(){
        cin.get(string, MAX);
    }
    bool operator == (String argString){
    return (strcmp(string,argString.string)==0)? 1:0;
    }

};

int main (){
String s1 = "sim";
String s2 = "nao";
String s3;
cout << "Responda sim ou nao " << endl;
s3.getString();
if(s3==s1){
    cout << "Voce digitou sim" << endl;
}
else if(s3==s2){
    cout << "Voce digitou nao" << endl;
}
else{
    cout << "Voce digitou outra coisa" << endl;
}

}
