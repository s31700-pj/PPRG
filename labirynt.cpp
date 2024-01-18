#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

char labirynt[10][20] = { // zadeklarowanie labiryntu
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
    {'#', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#'},
    {'#', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', '#', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', '#', '#', '#', ' ', '#'},
    {'#', '#', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', '#'},
    {'#', '$', ' ', '#', ' ', '#', '#', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', '#', '#', '#'},
    {'#', '#', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', '@', '#'},
    {'#', ' ', ' ', '#', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', '#', '#', '#'},
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
};

// wypisanie zmiennych
char ruch; 
int i;
int n;

int main() {

    system("chcp 65001"); // dodanie polskich znaków w terminalu

    int x = 6; // parametry w których zaczcyna gracz
    int y = 1;

    while (labirynt[7][18] != '$') { // gra trwa dopóki w miejscu @ nie będzie gracza, czyli $
    
        int j = x; // zainicjowanie parametrów po to aby po ruchu gracza utworzyć "korytarz" tam gdzie stał wcześniej
        int k = y;

        cout << "Sterowanie:\nW - do góry\nS - na dół\nA - w lewo\nD - w prawo\n" << endl; // instrukcja sterowania

        for (i = 0; i < 10; i++) { // wypisanie labiryntu na ekranie 

            for (n = 0; n < 20; n++) {

                cout << labirynt[i][n];
            }
            cout << endl;
        }

        restart: // etykieta od goto (na końcu pętli if po ruchu) 

        ruch = getch(); // oczekiwanie na ruch przez gracza

        int x2 = x; // te zmienne potrzebne będą do ustalenia czy gracz nie wszedł na ścianę
        int y2 = y; 

        if (ruch == 'w') { // instrukcje jak przemieścić gracza w zależności od tego jaki ruch dokonał

            x2 = x - 1;

        } else if (ruch == 's') {

            x2 = x + 1;


        } else if (ruch == 'a') {

            y2 = y - 1;

        } else if (ruch == 'd') {

            y2 = y + 1;

        } else {

            goto restart; // gdy gracz wciśnie inny przycisk program cofnie się do ponownego wyboru ruchu

        }

        if (labirynt[x2][y2] != '#') { // funkcja sprawdzająca czy gracz nie wszedł na ściane.

            x = x2; 
            y = y2;

        } else {

            goto restart; 

        }

        labirynt[x][y] = '$'; // przeniesienie postaci gracza tam gdzie się ruszył

        labirynt[j][k] = ' '; // utworzenie "korytarza" tam, gdzie gracz był przed ruchem

        system("CLS"); // wyczyszczenie konsoli

    }

    for (i = 0; i < 10; i++) { // finałowe wypisanie labiryntu z graczem na mecie

            for (n = 0; n < 20; n++) {

                cout << labirynt[i][n];
            }
            cout << endl;
        }

    cout << "Gratulacje, przeszedłeś labirynt! :)\nNaciśnij dowolny klawisz aby zakończyć grę.";

    getch();

    return 0;
}