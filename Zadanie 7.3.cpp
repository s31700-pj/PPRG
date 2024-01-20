#include <iostream>
using namespace std;

int i;
int n;
double r;
int x;
double pole;
double tablica[10][10];

int main() {

    cout << "Podaj długość promienia: ";
    cin >> r; 
    pole = r*r*3.14;
    cout << "Pole twojego koła wynosi " << pole << endl; 

    for(i=0;i<10;i++) {

    x = 30*i;

        for(n=0;n<10;n++) {

            tablica[i][n] = pole + 3*n+x;
            cout << tablica[i][n] << " ";

        }
        cout << endl;
    }

    return 0;
}