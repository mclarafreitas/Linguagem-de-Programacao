#include <iostream>

using namespace std;

int main(){
	int Vtotal=200;
	cin >> Vtotal;
	
	int v100 = Vtotal/100;
	Vtotal= Vtotal - v100*100;
	cout << Vtotal << " nota(s)de 100" << endl;
	
	return 0;
}

