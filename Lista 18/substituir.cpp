#include <iostream>
#include <cstring>

using namespace std;

const int tamanho = 50;

int main (){
	
	char letra[tamanho];
	
	cin.getline(letra, tamanho);
	
	char char1, char2;
	cin >> char1 >> char2;
	cout << letra << " =>" << endl;
	
	for (int i = 0; i < tamanho; i++){
		if (letra[i] == char1){
			letra[i] = char2;
		} 
		else if ( letra[i] == char2){
		    letra[i] = char1;
		}		
	}
	
	cout << letra << endl;
	
	return 0;
}
