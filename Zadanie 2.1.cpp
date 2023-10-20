#include <iostream>

using namespace std;

int n;
int i;
int x = 0;
int suma = 0;

int main()
{
    cout << "Podaj zmienna n: ";
   
    cin >> n;

    for (i = 1; i <=n; i++) {

        x = x + i;
        suma = suma + x;

    }

    cout << "Suma szeregu = " << suma;

    return 0;
}