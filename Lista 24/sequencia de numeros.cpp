#include <iostream>

using namespace std;

int funcao(int n){
    int a1 = 2, a2 = 3;
    if(n == 1){
        return a1;
    }
    else if(n == 2){
        return a2;
    }
    else{
        return 2 * funcao(n - 2) + funcao(n - 1);
    }
}

int main(){
    int n;
    cin >> n;
    
    cout << "a" << n << " = " << funcao(n) << endl;
    
    return 0;
}
