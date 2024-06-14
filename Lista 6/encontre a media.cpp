#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int numero1, numero2;
    float media = 0;
    cin >> numero1;
    
for(int i=0; i<numero1; i++){
    cin >> numero2;
    media += numero2;
}
    media /= numero1;
    cout << fixed << setprecision(2);
    cout << media <<endl;
    
    return 0;
}
