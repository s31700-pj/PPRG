#include <iostream>
#include <string>
using namespace std;

int i;
int n;
string napis;
string nowynapis;

int main () {

    cout << "Podaj swoj napis: ";
    cin >> napis;
    cout << "Podaj ile razy twoj napis ma byc do siebie dodany: ";
    cin >> n;

    nowynapis = napis;

    for(i=0;i<n;i++) {

    nowynapis = nowynapis + napis;

    }

    cout << nowynapis;

    return 0;
}