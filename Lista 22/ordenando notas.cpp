#include <iostream>
#include <iomanip>

using namespace std;

void media(double vetor[], int k){
    int i;
    double media = 0;
    double soma = 0;
    for(i = 0; i < k; i++){
        soma += vetor[i];
        media = soma/k;
    }
    cout << "M�dia = " << media << endl;
}

void funcaodecrescente(double vetor[], int n){
    int i;
    int j;
    for (i = 0; i < n; i++){
        for (j = i; j < n ; j++){
            if (vetor[i] < vetor[j]){
                double aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

void chamavetor(double vetor[], int n){
    cout << "[ ";
    for (int i = 0; i < n; i++){
        cin >> vetor[i];
        cout << fixed << setprecision(2) << vetor[i];
        if(i < n - 1){
            cout << " , ";
        }    
    }
    cout << " ]" << endl;
}

int main(){
    int k;
    cin >> k;
    int n;
    cin >> n;
    double vetor[n];
    
    chamavetor(vetor, n);
    funcaodecrescente(vetor, n);
    media(vetor, k);
    
    
    return 0;
}
