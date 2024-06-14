#include <iostream>

using namespace std;

int par_impar(int num, int& aux){
    cout << num << endl;
    aux++;
    if(num == 1){
        return aux;
    }
    if(num % 2 == 0){
        return par_impar(num / 2, aux);
    }
    else{
        return par_impar(3 * num + 1, aux);
    }
}

int main(){
    int num;
    int aux = -1;
    cin >> num;
    
    par_impar(num, aux);
    cout <<"N�meros de passos: " << aux << endl;
    
    return 0;
}
