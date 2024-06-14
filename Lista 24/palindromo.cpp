#include <iostream>
#include <ctype.h>
#include <cstring>

#define TAM 50

using namespace std;

int palindromo(char string[], int i1, int i2){
    if(i1 == i2 || (string[i1 - 1] == string[i2])){
        return true;
    }
    else if(string[i1] != string[i2]){
            return false;
        }
        else{
            i1++;
            i2--;
            return palindromo(string, i1, i2);
            }
        }
    
void funcao(char string[], int i1, int i2){
    if(palindromo(string, i1, i2) == true){
        cout << string << " � pal�ndromo" << endl;
    }
    else{
        cout << string << " n�o � pal�ndromo" << endl;
    }
}


int main() {
    char string[TAM];
    cin >> string;
    int tam = strlen(string);
    int i1 = 0;
    int i2 = tam - 1;
    
    funcao(string, i1, i2);

    return 0; 
 }
