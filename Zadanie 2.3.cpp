#include <iostream>
using namespace std;

int liczba;
int dni;

int main()
{
    cout << "Liczba 1-12 odpowiada danemu miesiącu od stycznia do grudnia." << endl;
    cout << "Podaj liczbę z przedziału 1-12: ";

    cin >> liczba;

    dni = liczba % 2;

    switch (liczba) {

    case 1:
        cout << "Styczen ";
        break;
    case 2:
        cout << "Luty ";
        break;
    case 3:
        cout << "Marzec ";
        break;
    case 4:
        cout << "Kwiecien ";
        break;
    case 5:
        cout << "Maj ";
        break;
    case 6:
        cout << "Czerwiec ";
        break;
    case 7:
        cout << "Lipiec ";
        break;
    case 8:
        cout << "Sierpien ";
        break;
    case 9:
        cout << "Wrzesien ";
        break;
    case 10:
        cout << "Pazdziernik ";
        break;
    case 11:
        cout << "Listopad ";
        break;
    case 12:
        cout << "Grudzien ";
        break;
    default:
        cout << "Podałeś liczbe spoza przedziału";
        break;
    }

    while (liczba < 8) {
    if (dni == 0 && liczba != 2) {

        cout << "ma 30 dni. " << endl;

    }
    else if (liczba == 2) {

        cout << "ma 28 dni." << endl;

    }
    else {

        cout << "ma 31 dni." << endl;

    }
    break;
    }

    while (liczba > 7 && liczba < 13) {
        if (dni == 0) {

            cout << "ma 31 dni. " << endl;

        }
        else {

            cout << "ma 30 dni." << endl;

        }
        break;
    }
    
    if (liczba > 12) {

    }
    else {

        if (liczba > 3 && liczba < 10) {

            cout << "Jest slonecznie. \n";

        }
        else {

            cout << "Jest pochmurnie. \n";

        }

    }
    return 0;
}
