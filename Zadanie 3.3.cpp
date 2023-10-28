#include <iostream>
#include <math.h>

using namespace std;

float a, b, c;
float delta;
float x1;
float x2;

int main()
{
    cout << "Rownanie kwadratowe ma postac \"ax^2 + bx + c = 0\"" << endl;

    cout << "Podaj odpowiednio zmienna a, zmienna b oraz zmienna c: " << endl;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << "Twoje rownanie kwadratowe to: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    delta = b * b - 4 * a * c;

    if (delta > 0) {

        x1 = (-b + sqrt(delta)) / 2 * a;
        x2 = (-b - sqrt(delta)) / 2 * a;

        cout << "Twoje miejsca zerowe to: " << x1 << " i " << x2 << endl;
    }
    else if (delta == 0) {

        x1 = (-b) / 2 * a;

        cout << "Twoje miejsce zerowe to: " << x1 << endl;

    }
    else {

        cout << "Twoje rownanie nie ma miejsc zerowych" << endl;

    }
    return 0;
}