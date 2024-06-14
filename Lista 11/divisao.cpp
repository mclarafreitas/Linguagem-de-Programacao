#include <iostream>

using namespace std;

int divisao(){
    int x, y, Q, R;
    cin >> x >> y;
    if(x!=0){
        Q = x/y;
    }
    if(x!=0){
        R = x%y;
    }
    cout << "Q = " << Q << endl;
    cout << "R = " << R << endl;
}

int main(){
    divisao();
    
    return 0;
}
