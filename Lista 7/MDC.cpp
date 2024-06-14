#include <iostream>

using namespace std;


int main(){
    
   int x, y, aux, recx, recy;
   cin >> x >> y;
   recx = x;
   recy = y;
   while (recy > 0){
   aux = recy;
   recy = recx % recy;
   recx = aux;
}
cout <<"MDC(" << y << "," << x << ") = " << recx << endl;


return 0;
}

