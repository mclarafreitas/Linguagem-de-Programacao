#include <iostream>

using namespace std;

int main() {
	int numero, total=0;
	cin >> numero;
	for (int i=1;i<=numero;i++) {
		if (numero%i==0)
			total++;
	}
	if (total==2){
		cout << "O n�mero " << numero << " � primo" << endl;
	}
	else{
		cout << "O n�mero " << numero << " n�o � primo" << endl;
	}
		
	return 0;
}
