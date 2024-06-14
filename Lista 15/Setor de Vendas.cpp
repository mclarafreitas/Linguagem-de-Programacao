#include <iostream>
#include <math.h>

using namespace std;
bool vendas(int x, int vetor[], int entrar){
    int aux = 0;
    bool ver;
    for(int i=0;i<entrar;i++){
    if(x == vetor[i]){
        aux++;
     }
    }
    if(aux >= 1){
        ver = true;
    }
    else{
        ver = false;
    }
    return ver;
}

bool dois(int vetor1[], int entrar1){
    int aux=0, i, j;
    bool ver=0;

       for(i=0; i<entrar1; i++){
	      for(j=0; j<entrar1; j++){
		    if(i!=j){	
			  if(vetor1[i]==vetor1[j]){	
				aux++;			
	   }			
      }
     }
    }
    if(aux >= 2){
        ver = true;
    }
    else{
        ver = false;
    }
    return ver;
}

int somar(int vetor[], int entrar){
    int soma=0;
    
    for(int i = 0;i<entrar;i++){
    soma = soma + vetor[i];
    }
    return soma;
}

bool caros(int vetor1[], int entrar1, int vetor2[], int entrar2){
    for (int i = 0; i < entrar1; i++) {
        for (int j = 0; j < entrar2; j++) {
            if (vetor1[i] <= vetor2[j]){
                return false; 
            }
        }
    }
    return true;
}

int main(){
    int entrar, entrar2, x1, x2;
    cin >> entrar;
    int vetor1[30];
    
    cout << "Vendas 1." << endl;
    cout << "[ ";
    for(int i=0; i<entrar; i++){
        cin >> vetor1[i];
        cout << vetor1[i];
        if(i<entrar - 1){
            cout << " , ";
        }
    }
    cout << " ]" << endl;
    
    cin >> entrar2;
    int vetor2[30];
    
    cout << "Vendas 2." << endl;
    cout << "[ ";
    for(int i=0; i<entrar2; i++){
        cin >> vetor2[i];
        cout << vetor2[i];
        if(i<entrar2 - 1){
            cout << " , ";
        }
    }
    cout << " ]" << endl;
    
    cin >> x1 >> x2;
    int valorx1 = x1;
    if(vendas(x1,vetor1,entrar)){
        cout << "Sim, funcion�rio 1 vendeu um produto cujo valor foi " << valorx1 << endl;
    }
    else{
        cout << "N�o, funcion�rio 1 n�o vendeu um produto cujo valor foi " << valorx1 << endl;    
        } 
        int valorx2 = x2;
    if(vendas(x2,vetor2,entrar2)){
        cout << "Sim, funcion�rio 2 vendeu um produto cujo valor foi " << valorx2 << endl;
    }
    else{
        cout << "N�o, funcion�rio 2 n�o vendeu um produto cujo valor foi " << valorx2 << endl;    
        }
    
    if(dois(vetor1,entrar)){
        cout << "Sim, funcion�rio 1 vendeu dois produtos com o mesmo valor" << endl;
    }
    else{
        cout << "N�o, funcion�rio 1 n�o vendeu dois produtos com o mesmo valor" << endl;    
        }
    if(dois(vetor2,entrar2)){
        cout << "Sim, funcion�rio 2 vendeu dois produtos com o mesmo valor" << endl;
    }
    else{
        cout << "N�o, funcion�rio 2 n�o vendeu dois produtos com o mesmo valor" << endl;    
        }

    if(somar(vetor1,entrar) > somar(vetor2,entrar2)){
        cout << "O melhor vendedor foi 1"  << endl;
    }
    else if(somar(vetor1,entrar) < somar(vetor2,entrar2)){
        cout << "O melhor vendedor foi 2" << endl;
    }
    else if(somar(vetor1,entrar) == somar(vetor2,entrar2)){
        cout << "Empate" << endl;
    }
    
    if(caros(vetor1,entrar,vetor2,entrar2)){
        cout << "Sim, todos os produtos vendidos por 1 foram mais caros que os produtos vendidos por 2" << endl;
    }
    else{
        cout << "N�o, os produtos vendidos por 1 n�o foram todos mais caros que os produtos vendidos por 2" << endl;
    }
    if(caros(vetor2,entrar2,vetor1,entrar)){
        cout << "Sim, todos os produtos vendidos por 2 foram mais caros que os produtos vendidos por 1" << endl;
    }
    else{
        cout << "N�o, os produtos vendidos por 2 n�o foram todos mais caros que os produtos vendidos por 1" << endl;
    }
    
    return 0;
}
