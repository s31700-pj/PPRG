#include <iostream>
#include <String>
using namespace std;

int i;
int n;
int x;
int y;

struct uczen {

string imie;
int infa;
int matma;
int biologia;
int polski;

};

int main () {

struct uczen lista[6];

for(i=0;i<6;i++) {

    cout << "Podaj dane " << i + 1 << " ucznia \nImie: ";
    cin >> lista[i].imie;
    cout << "Ocena z informatyki: ";
    cin >> lista[i].infa;
    cout << "Ocena z matematyki: ";
    cin >> lista[i].matma;
    cout << "Ocena z biologii: ";
    cin >> lista[i].biologia;
    cout << "Ocena z jezyka polskiego: ";
    cin >> lista[i].polski;

}

cout << "Podaj liczbe zapytan: ";
cin >> n;

for (i=0;i<n;i++) {

    cout << "Podaj numer ucznia (1-6): ";
    cin >> x;
    cout << "Podaj numer przedmiotu (1-4): ";
    cin >> y;

    cout << "Uczen " << lista[x].imie << endl;
    switch(y) {

        case 1:
        cout << "Ocena z informatyki: " << lista[x].infa << endl;
        break;
        case 2: 
        cout << "Ocena z matematyki: " << lista[x].matma << endl;
        break;
        case 3:
        cout << "ocena z biologii: " << lista[x].biologia << endl;
        break;
        case 4:
        cout << "Ocena z jezyka polskiego: " << lista[x].polski << endl;
        break;
        default:
        continue;
    }

    return 0;
}
}
