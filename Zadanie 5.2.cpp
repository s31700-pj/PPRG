/*Na wstępie dodam, że nie jestem pewien czy punkt a) i b) w zadaniu
ma oznaczać wczytanie tablicy przez użytkownika, więc zadeklarowałem
ją samemu w programie. Jeśli jednak ma być zrobione tak by to 
użytkownik miał podać wartości tablicy, to mogę poprawić zadanie. */

#include <iostream>

using namespace std;

int i;
int x;

int main() {

    int tablica[5][2] = {1,2,3,4,5,6,7,8,9,10};

    cout << "Tablica wejściowa: " << endl;

    for (i=0;i<5;i++) {
       
        for (x=0;x<2;x++) {

           cout << tablica[i][x] << "     ";

        }
       cout << endl;
    }

    cout << "Tablica wyjściowa: " << endl;

    for (i=0;i<5;i++) {
       
        for (x=1;x>=0;x--) {

           cout << tablica[i][x] << "     ";

        }
       cout << endl;
    }    

    return 0;
}