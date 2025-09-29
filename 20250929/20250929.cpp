#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;


int main()
{
    int PlayerX = 1;
    int PlayerY = 1;
    char PlayerShape = 'P';

    int MonsterX = 1;
    int MonsterY = 1;
    char MonsterShape = 'M';

    int Map[25][25] = {

    };

    while (true)
    {
        int KeyCode = _getch();

        if (KeyCode == 'w')
        {
            PlayerY--;
        }
        else if (KeyCode == 'a')
        {
            PlayerX--;
        }
        else if (KeyCode == 's')
        {
            PlayerY++;
        }
        else if (KeyCode == 'd')
        {
            PlayerX++;
        }
        else if (KeyCode == 'q')
        {
            break;
        }

        system("cls");

        for (int Y = 0; Y < 25; Y++)
        {
            for (int X = 0; X < 25; X++)
            {
                if (PlayerX == X && PlayerY == Y)
                {
                    cout << PlayerShape;
                }
                else if (MonsterX == X && MonsterY == Y)
                {
                    cout << MonsterShape;
                }
                else if (Map[Y][X] == 0)
                {
                    cout << " ";
                }
                else if (Map[Y][X] == 1)
                {
                    cout << "*";
                }
            }
            cout << '\n';
        }
    }

}


