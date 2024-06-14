#include <iostream>

using namespace std;

int main(){
    int entrar;
    cin >> entrar;
    
    int vet[30];
    
    for(int i=1; i<=entrar; i++){
        cin >> vet[i];
    }
    for(int i=entrar; i>=1; i--){
        cout << vet[i] << endl;
    }
    
    return 0;
}
