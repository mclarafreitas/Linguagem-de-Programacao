#include <iostream>

using namespace std;

bool teste (int alpha, int beta){
    
	int vara, varb;
	
	while (alpha < beta){
		alpha /= 10;
		beta /= 10;	
	}
	
	vara = alpha%10;
	varb = beta%10;
	
	if (vara == varb){
		return true;
	}
	
	else{
	    return false;
	}
   }

int main (){
	int entraalpha, entrabeta;
	
	cin >> entraalpha >> entrabeta;
	if (teste (entraalpha,entrabeta) == true && entraalpha>=entrabeta){
		cout << "A termina com B" << endl;
	}
	
	else{
		cout << "A não termina com B" << endl;
	}
	
	
	
	return 0;
}
