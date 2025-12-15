#include <iostream>
#include <vector>
using namespace std;

int VerificaQuantidadeAbas (int QuantidadeAbasInicial, const vector<string>& acoesEntrada)
{
	int QuantidadeAbasAbertas = QuantidadeAbasInicial;
	int totalAcoes = acoesEntrada.size();
	
	for (int i = 0; i < totalAcoes; i++)
	{
		if (acoesEntrada[i] == "clicou")
		{
			QuantidadeAbasAbertas--;	
		}	
		else if (acoesEntrada[i] == "fechou")
		{
			QuantidadeAbasAbertas+=1;
		}
	}
	
	return QuantidadeAbasAbertas;
}

int main ()
{
	int TotalAcoes, QuantidadeAbas;
	
	cin >> QuantidadeAbas >> TotalAcoes;
	
	vector<string> acoesPericles(TotalAcoes);
	
	for (int i = 0; i < TotalAcoes; i++)
	{
		cin >> acoesPericles[i];	
	}
	
	QuantidadeAbas = VerificaQuantidadeAbas(QuantidadeAbas, acoesPericles);
	
	cout << QuantidadeAbas << endl;
	
}
