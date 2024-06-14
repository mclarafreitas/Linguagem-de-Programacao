#include <iostream>

using namespace std;

int funcao(int n){
    int matriz[30][30];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                matriz[i][j] = 1;
            }
            else{
                matriz[i][j] = 0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    
    funcao(n);
    
    return 0;
}
