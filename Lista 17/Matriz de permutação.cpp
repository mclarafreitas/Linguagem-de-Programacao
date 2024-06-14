#include <iostream>

using namespace std;

const int MAX = 30;

int permutacao(int matriz[MAX][MAX], int n);

int main(){
  int matriz[MAX][MAX], i, j, n, permteste;

  cin >> n;

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      cin >> matriz[i][j];
    }
  }    
  permteste = permutacao(matriz, n);

  if(permteste == 1){
    cout << "� matriz de permuta��o" << endl;
  }
  else{
    cout << "N�o � matriz de permuta��o" << endl;
  }
  return 0;
}


int permutacao(int matriz[MAX][MAX], int n){
  int teste = 1, i, j;
  int somacoluna[MAX], soma;

  for(i = 0; i < n; i++){
    somacoluna[i] = 0;
}
  for(i = 0; i < n && teste == 1; i++){
    soma = 0;
    for(j = 0; j < n && teste == 1; j++){
      if(matriz[i][j] != 1 && matriz[i][j] != 0){
	   teste = 0;
      }
      else{
	   somacoluna[j] += matriz[i][j];
	   soma += matriz[i][j];
      }
    }
    if(soma != 1)
      teste = 0;
  }

  for(i = 0; i < n && teste == 1; i++){
    if(somacoluna[i] != 1)
      teste = 0;
}
  return teste;
}
