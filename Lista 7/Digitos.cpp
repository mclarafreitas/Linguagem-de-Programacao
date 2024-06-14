#include <iostream>

using namespace std;

int main(){
    int numero, aux = 0;
    cin >> numero;
    
    if(numero == 0){
        aux = 1;
    }
    else{
         while(numero != 0){
         aux = aux + 1;
         numero = numero / 10;
     }
    }
   cout << aux << endl;
 
    return 0;
}
