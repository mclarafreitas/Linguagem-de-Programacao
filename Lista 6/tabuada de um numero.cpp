#include <iostream>

using namespace std;

int main(){
    int numero=0;
    cin >> numero;
    
    for(int tabuada=1; tabuada<=10; tabuada++){
        cout << numero << " x " << tabuada << " = "<< tabuada*numero <<endl;
    }
    
    return 0;
}
