#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 1000;

int main(){
	
	string primeiro;
	string final;
	getline(cin,primeiro);
	
	final = primeiro;
	primeiro += " ++ ";
	
	string ultima;
	getline(cin,ultima);
	
	primeiro += ultima;
	primeiro += " = ";
	
	string palavras;
	palavras = primeiro + ultima;
	
	final += ultima;
	
	cout << primeiro <<  final << endl; 
}
