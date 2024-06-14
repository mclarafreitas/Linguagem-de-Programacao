#include <iostream>
#include <iomanip>

using namespace std;

int horas(){
   int quant, horas, minutos, segundos, horasemseg=3600;

   cin >> quant;

   horas = (quant/horasemseg);
   minutos = (quant -(horasemseg*horas))/60;
   segundos = (quant -(horasemseg*horas)-(minutos*60));

   cout << setfill('0') << setw(2) << horas << ":" << setfill('0') << setw(2) << minutos << ":" << setfill('0') << setw(2)<< segundos;
   
   return 0;
}

int main(){
    horas();
    
    return 0;
}
