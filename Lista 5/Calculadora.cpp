#include <iostream>

using namespace std;

int main(){
    double valor1, valor2;
    char operacao;
    cin >> valor1 >> valor2 >> operacao;
    if(valor1!=0 && valor2!=0){
    switch(operacao){
        case '+':
            cout << valor1 + valor2 << endl;
            break;
        case '-':
            cout << valor1 - valor2 << endl;
            break;
        case '*':
            cout << valor1 * valor2 << endl;
            break;
        case '/':
            cout << valor1 / valor2 << endl;
            break;
        default:
            cout << "erro!" << endl;
    }
   }
    else{
        cout << "erro!" << endl;
    }
    
    
    return 0;
}
