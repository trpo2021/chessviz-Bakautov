#include <iostream>
#include <cmath>
using namespace std;

void Cout(char igra[][8]) {
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << igra[i][j] << " ";
        }
        cout <<endl << endl;
 
    }
}
 
int Proverka(char igra[][8], char x_prev, int y_prev, char x_next, int y_next)
{
    while(igra[y_prev][x_prev] == 'a' || igra[y_prev][x_prev] == 'A') {
        if ((y_prev == 1 || y_prev == 6 ? abs(y_next - y_prev) <= 2 : abs(y_next - y_prev) <= 1) && abs(y_next - y_prev) > 0) {
            igra[y_next][x_next] = igra[y_prev][x_prev];
            igra[y_prev][x_prev] = 'o';            
        } else cout << "Вы не можете так сходить.";
    return 1;
    } return 0;
    
 
}
int main() {
    setlocale(LC_ALL,"Russian");
    int t, x_prev, x_next, y_prev, y_next;
    char x1, x2;
    char igra[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            igra[i][j] = 'o';
        }
        cout << endl;
    }
    for (int j = 0; j < 8; j++)
    {
        igra[1][j] = 'a';
    }a
    for (int j = 0; j < 8; j++)
    {
        igra[6][j] = 'A';
    }
    for(int i = 0; i < 8; i += 7)
        for(int j = 0; j < 8; ++j) {
            if(j < 5) {igra[i][j] = j + (i == 0 ? 98 : 66);}
            else igra[i][j] = igra[i][7-j];
        }
    igra[7][3] = 'F', igra[7][4] = 'E';  
    Cout(igra);
    cout << endl;
    do {
        cout <<"Игрок выберите строку и столбик фигуры"<< endl;
        cin >> x1 >> y_prev;
        x_prev = x1 - (x1 >= 97 ? 97 : 65);
        cout << "вы выбрали = "<< igra[y_prev-1][x_prev] << endl;
        cout <<"выберите куда будете ходить(строка столбик)";
        cin >> x2 >> y_next;
        x_next = x2 - (x2 >= 97 ? 97 : 65);
        t = Proverka(igra, x_prev, y_prev-1, x_next, y_next-1);
        cout << "\n\n\n";
        Cout(igra);
        cout << "\n\n\n";
    } while(t);
    return 0;
}
