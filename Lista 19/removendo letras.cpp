#include <iostream>
#include <cstring>
#include <string.h>
#include <ctype.h>

#define tamanho 50

using namespace std;

void funcao(char frase[], char letra[]){
	int tamanho1 = strlen(frase);
	int tamanho2 = strlen(letra);

	for(int i = 0; i < tamanho1; i++){
	    for(int j = 0; j < tamanho2; j++){
			if (frase[i] == letra[j]){
	            for (int k = i; k < tamanho1; k++) {
	                frase[k] = frase[k+1];
	            }
	            tamanho1--;
	            i--;
	        }
	    }
	}
	cout << frase;
}

int main (){
	char palavra[tamanho];
	cin.getline(palavra, tamanho);
	char char1[tamanho];
	cin >> char1;
	
	cout << palavra << " =>" << endl;
	funcao(palavra, char1);
	return 0;
}
