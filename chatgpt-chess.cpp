//script made by Exonl
//EXNL#8375
//https://github.com/Ex0nl

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

int main() // the program starts
{
    srand(time(0));

    bool infinite = true; // powers the infinite loop

    while (infinite == true) // infinite loop
    {

        std::cout << "Your move : ";
        std::string pmove;
        std::cin >> pmove;

        char p2;

        int p = rand() % 6 + 1; // random number from 1-6 for the pieces

        switch (p) // basically the code for the thing i just explained up here.
        {
        case 1:
            p2 = 'P';
            break;
        case 2:
            p2 = 'B';
            break;
        case 3:
            p2 = 'N';
            break;
        case 4:
            p2 = 'R';
            break;
        case 5:
            p2 = 'Q';
            break;
        case 6:
            p2 = 'K';
            break;
        }

        int tx = rand() % 2 + 1; // random number from 1-2 to decide if chatgpt takes or not. "Its random :skull:"
        char takes;

        if (tx == 1)
        {

            takes = ' ';
        }
        else
        {

            takes = 'x';
        }

        char c; // variable for the x-axis

        int num = rand() % 8 + 1; // y axis

        int c2 = rand() % 8 + 1;

        switch (c2)
        {
        case 1:
            c = 'a';
            break;
        case 2:
            c = 'b';
            break;
        case 3:
            c = 'c';
            break;
        case 4:
            c = 'd';
            break;
        case 5:
            c = 'e';
            break;
        case 6:
            c = 'f';
            break;
        case 7:
            c = 'g';
            break;
        case 8:
            c = 'h';
            break;
        }

        std::cout << "ChatGPT plays : " << p2 << takes << c << num << '\n'; // logs the move of ChatGPT's move
    }
}
