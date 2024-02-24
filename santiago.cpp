#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 30;

    funcionholamundo(10, 3);
}

void funcionholamundo(int a, int b)
{
    int suma = a + b;
    cout << "Hola mundo " << suma << endl;
}