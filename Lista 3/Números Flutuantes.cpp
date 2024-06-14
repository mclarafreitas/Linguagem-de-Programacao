#include <iostream>


using namespace std;


int main(){
  double x;
  cin >> x;
  int a=x;
  cout << "Parte inteira: " << a << endl;
  int b=(x-a)*1000;
  cout << "Parte decimal: " << b << endl;

return 0; 
}
