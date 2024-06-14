#include <iostream>

using namespace std;

float medialinha(int matriz[30][30], int l,int c){
    float soma = 0;
    for(int i=0; i<c; i++){
        soma= soma + matriz[l][i];
    }
    float media= soma/c;
    return media;
}
int main(){
    int l, c;
    cin >> l >> c;
    int matriz[30][30];
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            cin >> matriz[i][j];
        }
    }
    float vmedia[l];
    int lins[c];
    for(int i=0; i<l; i++){
        vmedia[i]= medialinha(matriz, i, c);
    }
    for(int i=0; i<l; i++){
        int cont=0;
        for(int j=0; j<c; j++){
            if(matriz[i][j]>=vmedia[i]){
                cont=cont + 1;
                if(cont==1){
                    cout << "[ " << matriz[i][j];
                }
                else{
                    cout << " , " << matriz[i][j];
                }
            }
        }
        cout << " ]" << endl;
    }
}
