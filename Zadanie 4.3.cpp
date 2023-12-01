#include <iostream>

using namespace std;

int i;
int n;

int main()
{
    int tablica[10][10];

    for(i=0;i<10;i++) {
        
        tablica[i][0] = i;
        
    }
    
    for(i=0;i<10;i++) {
        
        tablica[i][1] = i+i;
        
    }

    for(i=0;i<10;i++) {
        
        tablica[i][2] = i*i;
        
    }
    
    for(i=0;i<10;i++) {
        
        tablica[i][3] = i+3;
        
    }
    
    for(i=0;i<10;i++) {
        
        tablica[i][4] = i-4;
        
    }
    
    for(i=0;i<10;i++){
        
        for(n=0;n<10;n++){
            
            cout << tablica[i][n] << " ";
            
        }
        cout << endl;
    }
    return 0;
}