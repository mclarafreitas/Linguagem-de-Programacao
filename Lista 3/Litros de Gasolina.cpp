#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float horas, km;
	cin >> horas >> km;
	cout << fixed << setprecision(2);
	cout << (horas*km)/12 << endl;
	
	return 0;
}
