#include <iostream>

using namespace std;

int main(){
    int dia1, mes1, ano1, dia2, mes2, ano2;
    cin >> dia1 >> mes1 >> ano1 >> dia2 >> mes2 >> ano2;
    if(dia1>=1 && dia1<=31 && dia2>=1 && dia2<=31 && mes1>=1 && mes1<=12 && mes2>=1 && mes2<=12){
        if(ano1<ano2){
            cout << "A primeira data e mais antiga" << endl;
        }
    else if(ano1>ano2){
            cout << "A segunda data e mais antiga" << endl;
    }
    else{
        if(mes1<mes2){
            cout << "A primeira data e mais antiga" << endl;
        }
        else if(mes1>mes2){
            cout << "A segunda data e mais antiga" << endl;
        }
    else{
        if(dia1<dia2){
            cout << "A primeira data e mais antiga" << endl;
        }
        else if(dia1>dia2){
            cout << "A segunda data e mais antiga" << endl;
        }
    else{
        cout << "As datas sao iguais" << endl;
   }
  }
 }
}
    
    return 0;
}
