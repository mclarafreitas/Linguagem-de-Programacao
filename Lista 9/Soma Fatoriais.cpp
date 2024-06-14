#include <iostream>

using namespace std;


int fatorial(){
    int n, aux=1, fato=1, soma=0;
    cin >> n;

    while(aux<=n){
        fato *= aux;
        aux++;
        soma = fato + soma;
    }

    cout << soma << endl;
    
  return 0;
  }

int main(){
    fatorial();
    
    return 0;
}
