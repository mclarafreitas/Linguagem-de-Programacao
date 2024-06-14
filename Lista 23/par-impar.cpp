#include <iostream>

using namespace std;

int par_impar(int num){
    if(num == 0){
        return true;
    }
    else if(num == 1){
        return false;
    }
    else{
        return par_impar(num-2);
    }
}

int main(){
    int num;
    cin >> num;
    
    if(par_impar(num) == true){
        cout << num << " � par" << endl;
    }
    else if(par_impar(num) == false){
        cout << num << " � �mpar" << endl;
    }
    
    
    return 0;
}
