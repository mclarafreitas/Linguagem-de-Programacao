#include <iostream>

using namespace std;

const int MAX = 50;

void funcao(int matriz[MAX][MAX],int l,int c){
	for(int i =0;i<l;i++){
		for(int j=0;j<c;j++){
			cin>>matriz[i][j];
		}
	}
}
bool igualdade(int matriz[MAX][MAX],int l,int c){
	int cont1=0;
	for(int i=0;i<l-1;i++){
		for(int k=0;k<l;k++){
			for(int j=0;j<c;j++){
		
			if(i==k){
				k++;
			}
			if(matriz[i][j] == matriz[k][j])
			cont1++;
		}
		if(cont1 == c)
		return true;
		cont1=0;
	}
	}
	return false;
	
}



int main(){
	
	int l,c;
	cin>>l>>c;
	int matriz[MAX][MAX];
	funcao(matriz,l,c);
	if(igualdade(matriz,l,c)){
		cout <<"A matriz tem linhas repetidas " << endl;
	}else{
		cout <<"A matriz nao tem linhas repetidas " << endl;
	}
	return 0;
	
}
