#include "libchess/lib_chess.h"
#include <iostream>
#include <cmath>

using namespace std;

void Cout(char igra[8][8]) {
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << igra[i][j] << " ";
        }
        cout <<endl << endl;
 
    }
}
 
int Proverka(char igra[8][8], int x_prev, int y_prev, int x_next, int y_next)
{
    while(igra[y_prev][x_prev] == 'a' || igra[y_prev][x_prev] == 'A') {
        if ((y_prev == 1 || y_prev == 6 ? abs(y_next - y_prev) <= 2 : abs(y_next - y_prev) <= 1) && abs(y_next - y_prev) > 0) {
            igra[y_next][x_next] = igra[y_prev][x_prev];
            igra[y_prev][x_prev] = 'o';            
        } else cout << "Вы не можете так сходить.";
    return 1;
    } return 0;
    
 
}
