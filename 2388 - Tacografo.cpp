#include <iostream>

using namespace std;

int main()
{
	
	int QuantidadeRegistros, DistanciaTotal = 0;
	int tempoAtual, velocidadeAtual, distanciaAtual;
	
	cin >> QuantidadeRegistros;
	
	for (int i = 0; i < QuantidadeRegistros; i++)
	{
		cin >> tempoAtual >> velocidadeAtual;
		
		distanciaAtual = tempoAtual * velocidadeAtual;
		
		DistanciaTotal += distanciaAtual;
	}
	
	
	cout << DistanciaTotal << endl;
}
