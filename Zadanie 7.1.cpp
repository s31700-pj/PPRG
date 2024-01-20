#include <iostream>
#include <string>
using namespace std;

struct dane {

    string imie;
    string nazwisko;

};

int main() {

struct dane lista[3][2];
int i;
int n;

for (i=0;i<3;i++) {

    cout << "Osoba nr " << i + 1 << ":" << endl; 
    cout << "Podaj imie osoby nr " << i+1 << ": " << endl;
    cin >> lista[i][0].imie;
    cout << "Podaj nazwisko osoby nr " << i+1 << ": " << endl;
    cin >> lista[i][1].nazwisko;
    cout << endl;

}

for (i = 0; i < 3; i++) { 

    cout << "Osoba nr " << i+1 << endl;
    
    for (n = 0; n < 2; n++) {

        cout << lista[i][n].imie << " "; 
        cout << lista[i][n].nazwisko;
    }
    cout << endl;
}


return 0;
}