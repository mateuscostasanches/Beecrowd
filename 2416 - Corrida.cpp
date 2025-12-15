#include <iostream>

using namespace std;

int CalcularPontoParada(int MetrosPercorridos, int TamanhoPista)
{
	int Parada;
	Parada = (MetrosPercorridos % TamanhoPista);	
	return Parada;
}

int main()
{
	int MetrosPercorridos, TamanhoPista, ResultadoFinal;
	
	cin >> MetrosPercorridos >> TamanhoPista;
	
	ResultadoFinal = CalcularPontoParada(MetrosPercorridos,TamanhoPista);
	
	cout << ResultadoFinal << endl;
}
