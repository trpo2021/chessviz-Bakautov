#include "libchess/lib_chess.h"

#include <iostream>



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
	std::cout << std::endl;
    }
    for (int j = 0; j < 8; j++)
    {
        igra[1][j] = 'a';
    }
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
    std::cout << std::endl;
    do {
      std::cout <<"Игрок выберите строку и столбик фигуры"<< std::endl;
      std::cin >> x1 >> y_prev;
        x_prev = x1 - (x1 >= 97 ? 97 : 65);
	std::cout << "вы выбрали = "<< igra[y_prev-1][x_prev] << std::endl;
	std::cout <<"выберите куда будете ходить(строка столбик)";
	std::cin >> x2 >> y_next;
        x_next = x2 - (x2 >= 97 ? 97 : 65);
        t = Proverka(igra, x_prev, y_prev-1, x_next, y_next-1);
	std::cout << "\n\n\n";
        Cout(igra);
	std::cout << "\n\n\n";
    } while(t);
    return 0;
}
