#include <iostream>

using namespace std;

int fatorial(int n)
{
	int retorno;
	
	if (n == 0)
	{
		retorno = 1;	
	}
	
	else 
	{
		retorno = n * fatorial(n-1);
	}	
	
	return retorno;
}

int main ()
{
	
	int n, valorFatorial;
	
	cin >> n;
	
	valorFatorial = fatorial(n);
	
	cout << valorFatorial << endl;
	
}
