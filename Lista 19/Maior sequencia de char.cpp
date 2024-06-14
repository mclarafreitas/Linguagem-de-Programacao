#include <iostream>
#include <ctype.h>
#include <cstring>

using namespace std;

const int MAX = 1000;

int funcao(string entrada, char char1){
    int numcarac=0, maior=0;
    for(int i=0;entrada[i] != '\0';i++){
            if(entrada[i] == char1){
               numcarac++;
               if(maior<numcarac){
                   maior = numcarac;
               }
            }
            else{
                numcarac = 0;
        }
    }
    return maior;
}

int main(){
    string entrada;
    char char1;
    getline(cin, entrada);
    cin >> char1;
    
    cout << "String: " << entrada << endl;
    cout << "Char: " << char1 << endl;
    if(funcao(entrada,char1)){
        cout << "Tamanho: " << funcao(entrada,char1) << endl;
    }
    else if(funcao(entrada,char1) == 0){
        cout << "Tamanho: 0" << endl; 
    }
    
    return 0;
}
