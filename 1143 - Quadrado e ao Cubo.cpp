#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int numero;
	
	cin >> numero;
	
	vector<int> numeros(numero);
	vector<int> quadrados(numero);
	vector<int> cubos(numero);
	
	for (int i = 1; i <= numero; i++){
		numeros[i] = i;
		quadrados[i] = i * i;
		cubos[i] = i * i * i;
		
		cout << numeros[i] << " " << quadrados[i] << " " << cubos[i] << endl;
	}
	
}
