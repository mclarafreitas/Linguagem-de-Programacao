#include <iostream>
#include <iomanip>

using namespace std;

int horas(){
   int quant, horas, minutos, segundos, horasemseg=3600;

   cin >> quant;

   horas = (quant/horasemseg);
   minutos = (quant -(horasemseg*horas))/60;
   segundos = (quant -(horasemseg*horas)-(minutos*60));

   if (horas >= 0 && horas < 6){
       cout << "Madrugada" << endl;
   }
   else if (horas >= 6 && horas < 12){
       cout << "Manh�" << endl;
   }
   else if (horas >= 12 && horas <18){
       cout << "Tarde" << endl;
   }
   else {
       cout << "Noite" << endl;
   }
   
   return 0;
}

int main(){
    horas();
    
    return 0;
}
