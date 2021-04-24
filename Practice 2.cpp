#include <iostream>
#include "Pers.h"
#include <conio.h>
using namespace std;

int main()
{
    Knight artur("Artur\0", 1000, 100, 50, 10);
    Knight fread("Fread\0", 1000, 100, 50, 15);
    print(artur);
    print(fread);
    while (true) {
        attack(artur, fread, 5);
        if (isDead(fread)) break;
        attack(fread, artur, 13);
        if (isDead(artur)) break;
        print(artur);
        print(fread);
        std::cout << "Press any key to continue\n";
        _getch();
    }
    if (isDead(fread)) std::cout << "Artur wins\n";
    if (isDead(artur)) std::cout << "Fread wins\n";
}
