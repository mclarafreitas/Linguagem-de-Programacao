#include <iostream>

using namespace std;

int somar(){
    int x, y, somar;
    cin >> x >> y;
    somar = x;
    
    while(x < y){
    x++;
    somar = somar + x ;
}

    cout << somar << endl;
}

int main(){
    somar();
    
    return 0;
}
