#include <iostream>
#include <time.h>
#include <random>
#include <vector>
#include <string>
#include "words.cpp"
#include "clear.cpp"
#include "draw.cpp"
using namespace std;
int main()
{
    char letter;
    int attemptsLeft = 6;
    srand(time(nullptr));
    size_t size = sizeof(words) / sizeof(words[0]);
    string word  =  words[rand() % size];
    string guessed(word.size(), '_');
    guessed.resize(size);
    while(guessed.find('_') != std::string::npos)
    {
        drawBody(attemptsLeft);
        space();
        for(int i=0; i<word.size();i++)
        {
            cout << guessed[i] << ' ';
        }
        space();
        cout << "LETTER(S) : ";
        cin >> letter;
        space();
        bool contain = false;
        for(int i=0; i<word.size(); i++)
        {
            if(letter == word[i] && guessed[i] == '_')
            {
                guessed[i] = word[i];
                contain = true;
            }
        }
        if(!contain) attemptsLeft--;
        if(!attemptsLeft)
        {
            lose();
            break;
        }
    }
    ////space();
    if(attemptsLeft) won();
    space();
    cout << "THE WORD WAS '" << word <<"'";
    space();
    return 0;
}
