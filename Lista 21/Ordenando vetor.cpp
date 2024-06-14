#include <iostream>

using namespace std;

void funcaodecrescente(int vetor[], int n){
    for (int i = 0; i < n; i++){
        for (int j = i; j < n ; j++){
            if (vetor[i] < vetor[j]){
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
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

    funcaodecrescente(vetor, n);

    chamavetor(vetor, n);

  return 0;
}
