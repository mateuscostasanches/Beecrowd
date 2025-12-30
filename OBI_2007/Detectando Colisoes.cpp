#include <iostream> 
#include <vector>

using namespace std;

//x0 y0 x1 y1
void verificarColisao(vector<int> retangulo1, vector<int> retangulo2)
{
	bool flag = 1;
	
	if(retangulo1[2] < retangulo2[0] || retangulo1[0] > retangulo2[2] ||
	   retangulo1[3] < retangulo2[1] || retangulo1[1] > retangulo2[3]) {
	   		flag = 0;
	   }
	
	cout << flag << endl;
}

int main()
{
	bool verifica;
	vector<int> retangulo1(4);
	vector<int> retangulo2(4);	
	
	for(int i = 0; i < 4; i++){
		cin >> retangulo1[i];	
	}
	
	for(int i = 0; i < 4; i++){
		cin >> retangulo2[i];	
	}
	
	verificarColisao(retangulo1, retangulo2);
	
	return 0;
}
