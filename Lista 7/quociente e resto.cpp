using namespace std;

int main(){
    int valor1, valor2;
    int quociente=0;
    int resto;
    
    cin >> valor2 >> valor1;
    
    
    if (valor1 > valor2){
        resto = valor2;
        quociente = 0;
    }
    
    if (valor1 == 0){
        resto = valor2;
        quociente = 0;
    }
    
    if (valor1 == valor2){
        resto = 0;
        quociente = 1;
    }
    
    while (valor1*quociente < valor2){
        quociente++;
        if(valor1*quociente > valor2){
            resto = (-1)*(valor1*(quociente-1) - valor2);
        }
        if(valor1*quociente == valor2){
            resto = 0;
        }
    }
    if(valor1*quociente > valor2){
            quociente = quociente -1;
    }
    cout << "Quociente: "<< quociente << endl;
    cout << "Resto: " << resto << endl;
}
