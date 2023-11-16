#include <iostream>
using namespace std;

int main()
{
    int n, i, x, z;

    cout << "Podaj ilosc wierszy trojkata Pascala: ";
    cin >> n;

    cout << "\n";

    for (i = 1; i <= n; i++) {

        int y = 1;

        for (x = n - i; x > 0; x--) {

            cout << " ";

        }
        for (z = 1; z <= i; z++) {

            cout << y << " ";
            y = y * (i - z) / z;

        }
        cout << "\n";
    }
    return 0;
}