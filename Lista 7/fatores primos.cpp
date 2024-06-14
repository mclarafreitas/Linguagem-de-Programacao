#include <iostream>

using namespace std;


int main() {
   int natural, fatoracao = 2;
   cin >> natural;
   
   while (natural > 1) {
      if ((natural % fatoracao) == 0) {
         natural = natural / fatoracao;
    }
   else{
        fatoracao++;
  }
 }
 cout << fatoracao << endl;

  return 0;
}
