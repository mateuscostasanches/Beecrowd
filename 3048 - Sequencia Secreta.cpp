#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, cont=0, aux=0;
    cin >> n;

    vector<int> seq(n);

    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }

    for (int i = 0; i < n; i++) {
        if(seq[i] == 1 || seq[i] == 2){
            if(seq[i] != aux){
                cont++;
                aux = seq[i];
            }
        }
    }

    // aux = 0;
    // 1 2 1 
    // i
    //

    cout << cont << endl;
}