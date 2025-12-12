#include <iostream>

using namespace std;

int main ()
{

    double raio;
    double pi = 3.14159;
    double area;

    cin >> raio;

    area = pi * (raio*raio);

    printf("A=%.4f\n", area);

}