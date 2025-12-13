#include <iostream>

using namespace std;

char ConverterNota(int Nota){
	
	char Retorno;
	
	if (Nota == 0)
	{
		Retorno = 'E';
	}
	else if (Nota > 0 && Nota <= 35)
	{
		Retorno = 'D';	
	}
	else if (Nota > 35 && Nota <= 60)
	{
		Retorno = 'C';	
	}
	else if (Nota > 60 && Nota <= 85)
	{
		Retorno = 'B';	
	}
	else 
	{
		Retorno = 'A';	
	}
	
	return Retorno;
}

int main()
{
	int Nota;
	char NotaConvertida;
	
	cin >> Nota;
	
	NotaConvertida = ConverterNota(Nota);
	
	cout << NotaConvertida << endl;
	
}
