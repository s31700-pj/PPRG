#include <iostream>
using namespace std;

int silnia(int n) {

    if (n<2) {

        return 1;
    }

    return n * silnia(n-1);

}

int main() {

    int n;
    int wynik;

    cout << "Podaj liczbę: ";
    cin >> n;
    cout << n << "! = " << silnia(n) << endl;
    cout << "Twój wynik jest podzielny przez następujące liczby: " << endl;

    if (silnia(n) % 2 == 0) {

        cout << "2" << endl;

    } if (silnia(n) % 3 == 0) {

        cout << "3" << endl;

    } if (silnia(n) % 5 == 0) {

        cout << "5" << endl;

    } if (silnia(n) % 11 == 0) {

        cout << "11" << endl;

    } if (silnia(n) % 2 != 0 && silnia(n) % 3 != 0 && silnia(n) % 5 != 0 && silnia(n) % 11 != 0) {

        cout << "Twoja liczba nie dzieli się przez żadną z liczb ://" << endl;

    }

    return 0;
}