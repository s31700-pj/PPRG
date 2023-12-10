#include <iostream>
#include <vector>

using namespace std;

int main() {

    int i;
    int n;
    int max = 0;
    int indeks;

    cout << "Podaj wielkość twojego wektora: ";
    cin >> n; 
    
    vector <int> wektor;

    cout << "Podaj elementy wektora: ";
    for (i = 0; i < n; i++) {

        int x;
        cin >> x;
        wektor.push_back(x);

    }

    for (i = 0; i < n; i++) {

        if (max<=wektor[i]) {
            max = wektor[i];
            indeks = i; // jeśli numer indeksu liczymy od 0 to zostaje jak jest, jeśli liczymy od 1 to "indeks = i+1;"
        }

    }

    cout << "Twój wektor to: ";

    for (i = 0; i < n; i++) {
        cout << wektor[i] << " ";
    }

    cout << "\nNajwiększy element z wektora to: " << max << " a jego numer indeksu to: " << indeks << endl;

    return 0;
}