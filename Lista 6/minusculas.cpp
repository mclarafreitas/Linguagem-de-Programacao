#include <iostream>
using namespace std;

int main ()
{
	
	int total;
	cin >> total;
	int aux = 0;
	char letra;
	
	for (int i = 0; i < total; i++){
		
		cin >> letra;
		
		if (letra >= 97 && letra <= 122){
			aux++;
		}
	}
	
	cout << aux << endl;
	
	return 0;
}
