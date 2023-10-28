#include <iostream>

using namespace std;

char znak;
bool ciag = true;

int main()
{
    cout << "Wpisz na klawiaturze jakis znak: ";

    while (ciag = true) {

        cin >> znak;

        if (znak == 't') {

            break;

        }
        else {

            cout << znak << " ";

        }

    }
    
    return 0;
}