#include <iostream>

using namespace std;

int decre(int &a, int &b){
    int aux;
    aux=a;
    a=b;
    b=aux;
}
int par(int vetor[], int n){
    for(int a = n - 1; a >= 1; a--){
        for (int b = 0; b < n - 2; b++){
            if(b%2 == 0){
                if(vetor[b] > vetor[b + 2]){
                   decre(vetor[b], vetor[b + 2]);
                }
            }
        }
    }
}
int impar(int vetor[], int n){
    for(int a = n - 1; a >= 1; a--){
        for (int b = 0; b < n - 2; b++){
            if(b%2 != 0){
                if(vetor[b] < vetor[b + 2]){
                   decre(vetor[b], vetor[b + 2]);
                }
            }
        }
    }
}

void chamavetor(int vetor[], int n){
    cout << "[ ";
    for (int i = 0; i < n; i++){
        cin >> vetor[i];
        cout << vetor[i];
        if(i < n - 1){
            cout << " , ";
        }    
    }
    cout << " ]" << endl;
}

int main(){
    int n;
    cin >> n;
    int vetor[n];
    
    chamavetor(vetor, n);
    impar(vetor, n);
    par(vetor, n);
    chamavetor(vetor,n);
    
    return 0;
}
