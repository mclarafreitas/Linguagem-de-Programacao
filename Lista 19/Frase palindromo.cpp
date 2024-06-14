#include <iostream>
#include <ctype.h>
#include <cstring>

using namespace std;

const int MAX = 10000;

int funcao(string entrada){
    char normal[MAX], invertido[MAX], c;
    int i, tamanho;
    
    
    tamanho = 0;
    for(i=0; entrada[i] != '\0'; i++){
        c = toupper(entrada[i]);
        if(c >= 'A' && c <= 'Z'){
            normal[tamanho] = c;
            tamanho++;
        }
    }
    normal[tamanho] = '\0';
    
    for(i=0; i<tamanho; i++){
        invertido[tamanho-i-1] = normal[i];
        invertido[tamanho] = '\0';
    }
    
    if(strcmp(normal, invertido) == 0){
        cout << "\"" << entrada << "\""  << " � um pal�ndromo" <<endl;
    }
    else{
        cout << "\"" << entrada << "\"" <<" n�o � um pal�ndromo" << endl;
    }
}
int main(){
    string entrada;
    getline(cin, entrada);
    
    funcao(entrada);
    
    return 0;
}
