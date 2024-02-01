#include <iostream>
using namespace std;

int i;

int main () {

    int n;

    cout << "Podaj liczbę n: ";
    cin >> n;

    for(i = 0; i < n; i++) {

        if (i % 5 == 0 && i % 3 != 0) {
            cout << i << endl;
        }

    }


    return 0;
}