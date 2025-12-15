#include <iostream>
using namespace std;

int CalculaQuantidadeGramas(int Porcoes[])
{
	int QuantidadeTotal = 225;
	
	QuantidadeTotal += (Porcoes[0] * 300) + (Porcoes[1] * 1500) + 
					  (Porcoes[2] * 600) + (Porcoes[3] * 1000) +
					  					   (Porcoes[4] * 150);
	
	return QuantidadeTotal;
}

int main()
{
	
	int Porcoes[5];
	int ResultadoFinal;
	
	for (int i = 0; i < 5; i++){
		
		cin >> Porcoes[i];
		
	}
	
	ResultadoFinal = CalculaQuantidadeGramas(Porcoes);
	cout << ResultadoFinal << endl;
}
