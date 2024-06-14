#include <iostream>

using namespace std;

int mdc(int x , int y){
    if(y == 0){
        return x;
    }
    else if(x == 0){
        return y;
    }
    else{
        return mdc(y, x % y);
    }
}

int main(){
    int x, y;
    cin >> x >> y;
    
    cout << "MDC(" << x << " , " << y << ") = ";
    
    
    cout << mdc(x,y) << endl;
    
    
    return 0;
}
