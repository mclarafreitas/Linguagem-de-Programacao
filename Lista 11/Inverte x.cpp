#include <iostream>
#include <math.h>

using namespace std;


int quant (int numero){
	int aux = 0;
	
	while(numero >= 1){
		numero /= 10;
	 aux++ ;
	}
	return aux;
}

int fInverter (int numero){
	int varInverter = 0;
	int varAux = quant(numero);
	
	while (numero >= 1){
		varInverter = varInverter +(numero%10)*pow(10,varAux-1);
		numero /= 10;
		varAux--;
	}
	return (varInverter);
}

int main(){
	int num;
	
	cin >> num ;
	int Inver = fInverter(num);
	
	if (Inver < num){
		cout << "X = " << num << "\nX invertido = " << Inver << "\nX � maior que X invertido" << endl;
	}
	else if(Inver > num ){
		cout << "X = " << num << "\nX invertido = " << Inver << "\nX � menor que X invertido" << endl;
	}
	else{
		cout << "X = " << num << "\nX invertido = " << Inver << "\nX � igual que X invertido" << endl;
	}
	
	return 0;
}
