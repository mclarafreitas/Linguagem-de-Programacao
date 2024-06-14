#include <iostream>

using namespace std;

int funcao(){
int entrar;
    cin >> entrar;
    
    int vetor1[50], vetor2[50], soma[50];

    for(int i = 0; i < entrar; i++){
        cin >> vetor1[i];
    }
    
    for(int i = 0; i < entrar; i++){
        cin >> vetor2[i];
    }
    
    cout << "[ " ;
	
	for(int i = 0 ; i < entrar ; i++){
		soma[i]= vetor1[i] + vetor2[i];
		cout << soma[i];
		
		if(i < entrar - 1){
			cout << " , " ;
		}
	}
	cout << " ]" ;
}
int main(){
    funcao();
    
    return 0;
}
