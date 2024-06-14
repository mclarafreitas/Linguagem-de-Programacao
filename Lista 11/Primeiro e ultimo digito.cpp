#include <iostream>

using namespace std;

int primeiroeultimo(){
    int numero, primeiro, ultimo, pnumero;
    cin >> numero;
    pnumero = numero;
    
    if(numero >= 0){
        do {
            primeiro = numero % 10;
            cin >> primeiro;
            numero /= 10;
        }while(numero != 0);
    }
    if(numero >= 0){
        ultimo = pnumero % 10;
    }
    cout <<"primeiro=" << primeiro <<" " << "ultimo=" << ultimo << endl;
}
    
int main(){
    primeiroeultimo();
    
    return 0;
}
