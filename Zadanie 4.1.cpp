#include <iostream>
#include <algorithm>
using namespace std;

int i;
int najwieksza = 0;

int main()
{
    int rozmiar;
    cout << "Podaj rozmiar tablicy: ";
    cin >> rozmiar;
    int tablica[rozmiar];

    cout << "Podaj liczby do tablicy: ";
    for (i = 0; i < rozmiar; i++) {

        cin >> tablica[i];

    }
    
    for (i = 0; i< rozmiar; i++) {
        
        if (tablica[i] > najwieksza) {
            najwieksza = tablica[i];
        }
    }
    
    cout << "Największa wartość z twojej tablicy to: " << najwieksza << endl;

    return 0;
}