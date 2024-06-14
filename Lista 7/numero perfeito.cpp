#include <iostream>

using namespace std;

int main(){
    int recx, aux;
    int somar = 0;
    cin >> recx;
    
    aux = recx;
    
    for(int i = 1; i < recx; i++)
    {
        aux = i;
        for(int j = 1; j < aux; ++j)
        {
            if (aux%j == 0)somar = somar + j;
        }
        if (aux == somar)
        cout << aux << endl;
        
        somar = 0;

    }
    
}
