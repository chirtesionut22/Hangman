#include <iostream>
using namespace std;

void drawBody(int attemptsLeft)
{
    switch(attemptsLeft)
    {
        case 6:
            cout << "    _______ \n"
                 << "   |/     | \n"
                 << "   |       \n"
                 << "   |       \n"
                 << "   |       \n"
                 << "   |       \n"
                 << "___|___\n";
            break;
        case 5:
            cout << "   _______ \n"
                 << "   |/     | \n"
                 << "   |      O \n"
                 << "   |       \n"
                 << "   |       \n"
                 << "   |       \n"
                 << "___|___\n";
            break;
        case 4:
            cout << "    _______ \n"
                 << "   |/     | \n"
                 << "   |      O \n"
                 << "   |      | \n"
                 << "   |       \n"
                 << "   |       \n"
                 << "___|___\n";
            break;
        case 3:
            cout << "   _______ \n"
                 << "   |/     | \n"
                 << "   |      O \n"
                 << "   |     /| \n"
                 << "   |       \n"
                 << "   |       \n"
                 << "___|___\n";
            break;
        case 2:
            cout << "   _______ \n"
                 << "   |/     | \n"
                 << "   |      O \n"
                 << "   |     /|\\ \n"
                 << "   |       \n"
                 << "   |       \n"
                 << "___|___\n";
            break;
        case 1:
            cout << "   _______ \n"
                 << "   |/     | \n"
                 << "   |      O \n"
                 << "   |     /|\\ \n"
                 << "   |     /  \n"
                 << "   |       \n"
                 << "___|___\n";
            break;
        case 0:
            cout << "   _______ \n"
                 << "   |/     | \n"
                 << "   |      O \n"
                 << "   |     /|\\ \n"
                 << "   |     / \\ \n"
                 << "   |       \n"
                 << "___|___\n";
            break;
        default:
            cout << "Invalid number of attempts left.\n";
            break;
    }
}

void lose()
{
    cout << "#################################\n";
    cout << "###          YOU LOST         ###\n";
    cout << "#################################\n";
}

void won()
{
    cout << "#################################\n";
    cout << "###          YOU WON          ###\n";
    cout << "###          CONGRATS         ###\n";
    cout << "#################################\n";
}
