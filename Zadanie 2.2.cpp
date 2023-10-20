#include <iostream>

using namespace std;

int i;
int x;
int y = 0;
int a;
int b;

int main()
{
    cout << "Podaj zmienną a: ";

    cin >> a;

    cout << "Podaj zmienną b: ";

    cin >> b;

    cout << "Pobrano zmienną a = " << a << " oraz zmienną b = " << b << "." << endl;

    cout << "Wiersz o długości a: " << endl;
    cout << "\n";
    
    for (i = 0; i < a; i++) {

        cout << "*";
        
    }

    cout << "\n";
    cout << "\n";
    cout << "Kolumna o długości b: " << endl;
    cout << "\n";

    for (i = 0; i < b; i++) {

        cout << "*" << endl;

    }

    cout << "\n";
    cout << "Prostokąt gwiazdek o wymiarach 'a' na 'b': " << endl;
    cout << "\n";

    for (i = 0; i < b; i++) {

        for (x = 0; x < a; x++) {

            cout << "*";

        }

        cout << "\n";

    }

    cout << "\n";
    cout << "Obwód prostokąta gwiazdek o wymiarach 'a' na 'b': " << endl;

    for (x = 0; x < b; x++) { 

        if (x == 0 || x == b - 1) { 

            for (i = 0; i < a; i++) {  

                cout << "*";

            }

        }

            for (i = 0; i < a; i++) { 

                if (x == 0 || x == b - 1) {
                    continue;
                }

                if (i == 0 || i == a - 1) { 

                    cout << "*";
                }
                cout << " ";

            }
        cout << "\n";
        cout << "";

        
    }
    cout << "\n";
    cout << "Trójkąt prostokątny równoramienny: \n";
    
    for (i = 0; i < b; i++) {

        for (x = 0; x < a; x++) {

            cout << "*";
            
            if (x == i) {
                break;
            }

        }

        cout << "\n";

    }

    cout << "\n";
    cout << "Odwrócony trójkąt prostokątny równoramienny: \n";
    
    for (i = 0; i < b; i++) {

        for (x = 0; x < a; x++) {
            
            if (x <= i-1 ) {
                cout << " ";
            }
            else {
                cout << "*";
            }
        }

        cout << "\n";

    }

    return 0;
}