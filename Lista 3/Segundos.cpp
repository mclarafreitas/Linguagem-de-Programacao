#include<iostream>


using namespace std;


int main(){
    int horas, min, seg;
    cin >> seg;
    horas=seg/3600;
    min=(seg%3600)/60;
    seg=seg%60;
    cout << horas << " hora(s), " << min << " minuto(s) e " << seg << " segundo(s)" << endl;
    
    return 0;
    }
