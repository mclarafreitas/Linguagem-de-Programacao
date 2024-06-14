#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float salario, venda;
	cin >> salario >> venda;
	cout << fixed << setprecision(2);
	cout << "Total = R$ "<< salario + (0.05 * venda) << endl;
	
	return 0;
}
