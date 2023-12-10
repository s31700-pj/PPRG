#include <iostream>
#include <algorithm>
using namespace std;

int i;
int wynik;
int liczba = 0; 
int maximum = 0;

int main()
{
    int rozmiar; 
    cout << "Podaj rozmiar tablicy: ";
    cin >> rozmiar;
    int tablica[rozmiar];
    
    cout << "Podaj liczby do tablicy: ";
    for (i = 0; i < rozmiar; i++) {

        cin >> tablica[i];

    }
    
  sort(tablica,tablica+rozmiar);
  for(i=0;i<rozmiar-1;i++)
  {
    if(tablica[i]==tablica[i+1])
      liczba++;
    if(liczba>maximum)
    {
      maximum=liczba;
      wynik=i;
    }
  }

  cout << "Najczęsciej występujący element w tablicy to: " << tablica[wynik] << endl;
  return 0;
}
