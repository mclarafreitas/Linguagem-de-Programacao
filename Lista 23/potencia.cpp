#include <iostream>

using namespace std;

int multi(int n1, int n2){
    if(n1==0 || n2==0){
        return 1;
    }
    else{
     return(n1 * multi(n1,n2-1));
    }
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    cout <<"pow( "<< n1 << " , " << n2 <<" )"<< " = ";
    cout << multi(n1, n2) << endl;
    
    return 0;
}
