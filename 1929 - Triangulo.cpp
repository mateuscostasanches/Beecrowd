#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void VerificaTriangulo(vector<int> varetas)
{
	bool encontrou = false;
	
	for (int i = 0; i < 2; i++){
		for (int j = i+1; j < 3; j++){
			for (int k = j+1; k < 4; k++){
				if (varetas[i] + varetas[j] > varetas[k])
				{
					encontrou = true;
				}
			}
		}
	}	
	
	if (encontrou == true){
		cout << "S\n";
	}
	else {
		cout << "N\n";
	}
}

int main()
{
	vector<int> varetas(4);
	
	for (int i = 0; i < 4; i++){
		cin >> varetas[i];
	}
	
	sort(varetas.begin(), varetas.end());
	
	VerificaTriangulo(varetas);
	return 0;
}
