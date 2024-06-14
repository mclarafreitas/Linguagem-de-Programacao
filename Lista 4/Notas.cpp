#include <iostream>

using namespace std;

int main(){
    double nota1, nota2, nota3;
    cin >> nota1 >> nota2 >> nota3;
    double media= (nota1 + nota2 + nota3)/3;
    if(media>=5 && nota1>=3 && nota2>=3 && nota3>=3){
        cout << "Aprovado" << endl;
    }
    else {
        if(media>=3 && media<5||media>5){
        cout << "Final"<< endl;    
      }
     }
    if(media<3){
        cout << "Reprovado" << endl;    
    }
    
    return 0;
}
