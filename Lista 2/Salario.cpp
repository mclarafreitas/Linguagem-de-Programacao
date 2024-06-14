#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int id, horas;
   float salario;
   cin >> id >> horas >> salario;
   cout << "ID: " << id << endl;
   cout << fixed << setprecision(2);
   cout << 	"Salario: " << horas * salario << endl;
   
   return 0;
}
