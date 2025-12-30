#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int NumeroPecas, pecaFaltando, somaTotal = 0, somaPecas = 0;	
	cin >> NumeroPecas;
	
	vector<int> PecasJoaozinho(NumeroPecas-1);
	
	for(int i = 1; i <= NumeroPecas; i++){
		somaTotal += i;	
	}
	
	for (int i = 0; i < NumeroPecas-1; i++){
		cin >> PecasJoaozinho[i];
		somaPecas += PecasJoaozinho[i];
	}
	
	pecaFaltando = somaTotal - somaPecas;
	
	cout << pecaFaltando << endl;
	return 0;
}
