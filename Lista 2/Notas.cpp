#include <iostream>

using namespace std;

int main(){
	int Vtotal;
	cin >> Vtotal;
	
	int v100 = Vtotal/100;
	Vtotal= Vtotal - v100*100;
	cout << v100 << " nota(s)de 100" << endl;
	int v50 = Vtotal/50;
	Vtotal= Vtotal - v50*50;
	cout << v50 << " nota(s)de 50" << endl;
	int v20 = Vtotal/20;
	Vtotal= Vtotal - v20*20;
	cout << v20 << " nota(s)de 20" << endl;
	int v10 = Vtotal/10;
	Vtotal= Vtotal - v10*10;
	cout << v10 << " nota(s)de 10" << endl;
	int v5 = Vtotal/5;
	Vtotal= Vtotal - v5*5;
	cout << v5 << " nota(s)de 5" << endl;
	int v2 = Vtotal/2;
	Vtotal= Vtotal - v2*2;
	cout << v2 << " nota(s)de 2" << endl;
	int v1 = Vtotal/1;
	Vtotal= Vtotal - v1*1;
	cout << v1 << " moeda de 1" << endl;
	
	return 0;
}
