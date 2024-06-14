#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int tamanho1, tamanho2, maior = -1, menor = 10000;
    cin >> tamanho1 >> tamanho2;
    float soma=0, media;
    int matriz[30][30];
    
    for(int i=0;i<tamanho1;i++){
        for(int j=0;j<tamanho2;j++){
           cin >> matriz[i][j]; 
        }
    }
    for(int i=0;i<tamanho1;i++){
        for(int j=0;j<tamanho2;j++){
            if(matriz[i][j] <= menor){
                menor = matriz[i][j];
            }
        }
    }
    cout << "Menor valor: " << menor << endl;
    
    for(int i=0;i<tamanho1;i++){
        for(int j=0;j<tamanho2;j++){
            if(matriz[i][j] >= maior){
                maior = matriz[i][j];
            }
        }
    }
    cout << "Maior valor: " << maior << endl;
    
    for(int i=0;i<tamanho1;i++){
        for(int j=0;j<tamanho2;j++){
                soma = soma + matriz[i][j];
        }
    }
    media = (soma/(tamanho1*tamanho2));
        cout << "M�dia dos valores: " <<fixed<<setprecision(2)<< media << endl;

    return 0;
}
