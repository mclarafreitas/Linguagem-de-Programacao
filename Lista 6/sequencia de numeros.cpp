#include <iostream>

using namespace std;

int main(){
    int numero, aux=0;
    cin >> numero;
    aux=numero;
    
    while(numero!=0){
        cin >> numero;
        if(numero<aux && numero!=0){
            aux=numero;
        }
    }
    cout << aux << endl;
    
    return 0;
}
