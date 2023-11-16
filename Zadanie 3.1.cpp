#include <iostream>
#include <iomanip>

using namespace std;

float x;
float y;

int main() {

    cout << "Podaj liczbe x: ";

    cin >> x;

    cout << "\nPodaj liczbe y: ";

    cin >> y;

    float suma = x + y;
    float roznica = x - y;
    float iloczyn = x * y;
    float iloraz = x / y;

    cout << fixed << setprecision(2);
    cout << "\nSuma podanych liczb to " << suma;
    cout << "\nRóżnica podanych liczb to " << roznica;
    cout << "\nIloczyn z podanych liczb to " << iloczyn;
    cout << "\nIloraz z podanych liczb to " << iloraz;

    return 0;
}