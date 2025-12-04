#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <ctime>
#include <cstdlib>

using namespace std;

int  A = 1, E = 1, I = 1, L = 1, N = 1, O = 1, R = 1, S = 1, T = 1, U = 1;
int D = 2, G = 2;
int B = 3, C = 3, M = 3, P = 3;
int F = 4, H = 4, V = 4, W = 4, Y = 4;
int K = 5;
int J = 8, X = 8;
int Q = 10, Z = 10;

string userInput;
int totalPoints = 0;

int getTotalPoints(char letter)
{
    switch (tolower(letter))
    {
    case 'a': case 'e': case 'i': case 'l': case 'n':

    case 'o': case 'r': case 's': case 't': case 'u':

        return 1;

    case 'd': case 'g':

        return 2;

    case 'b': case 'c': case 'm': case 'p':

        return 3;

    case 'f': case 'h': case 'v': case 'w': case 'y':

        return 4;

    case 'k':

        return 5;

    case 'j': case 'x':

        return 8;
    case 'q': case 'z':

        return 10;

    default:

        return 0;
    }
}



string Winner(const string& player1, const string& player2) {
    if (player1 == player2) {
        return "It's a draw! try again!!";
    }
    if ((player1 == "rock" && player2 == "scissors") ||
        (player1 == "scissors" && player2 == "paper") ||
        (player1 == "paper" && player2 == "rock")) {
        return "Player 1 wins! Good job! ";
    }
    return "Player 2 wins! Good job! ";
}

int rollD20()
{
    return rand() % 20 + 1;
}


int rollD4()
{
    return rand() % 4 + 1;
}



int main()
{
    std::cout << "Please enter your name" << "\n";

    string name;

    std::cin >> name;

    std::cout << "welome " << name << " lets play some games " << "\n";

    std::cout << "Please pick from the following five " << "\n";

    std::cout << "1. scrabble " << "\n";

    int gameOne = 1;

    std::cout << "2. rock, paper, scissors " << "\n";

    int gameTwo = 2;

    std::cout << "3. dice rolling " << "\n";

    int gameThree = 3;

    std::cout << "4. hangman " << "\n";

    int gameFour = 4;

    std::cout << "5. surprise" << "\n";

    int gameFive = 5;

    int whichGame;

    cin >> whichGame;

    if (whichGame = gameOne)
    {
        std::cout << "Enter a word to determine points:\n" << endl;

        std::cin >> userInput;


        for (char c : userInput)
        {
            totalPoints += getTotalPoints(c);
        }

        std::cout << "your total points is: " << totalPoints << "\n";

    }

    system("cls");

    if (whichGame = gameTwo)
    {

        string player1Choice, player2Choice;


        cout << "Player 1, please enter your choice rock/paper/scissors: ";
        cin >> player1Choice;
        system("Cls");
        cout << "Player 2, please enter your choice rock/paper/scissors: ";
        cin >> player2Choice;
        system("Cls");


        if ((player1Choice != "rock" && player1Choice != "paper" && player1Choice != "scissors") ||
            (player2Choice != "rock" && player2Choice != "paper" && player2Choice != "scissors")) {
            cout << "Invalid input! Please enter 'rock', 'paper', or 'scissors'." << endl;
            return 1;
        }


        string result = Winner(player1Choice, player2Choice);
        cout << result << endl;


    }

    system("Cls");

    if (whichGame = gameThree)
    {
        srand(static_cast<unsigned int>(time(0)));

        int d20, d4;
        int counter = 0;

        cout << "Rolling until both dice roll SNAKE EYES! (that's 1 btw)..." << endl;

        do
        {
            d20 = rollD20();
            d4 = rollD4();
            counter++;

            cout << "Roll " << counter << ": d20 = " << d20 << ", d4 = " << d4 << endl;

        } while (!(d20 == 1 && d4 == 1));

        std::cout << "\nSnake eyes achieved after " << counter << " rolls!" << endl;

    }
    system("cls");

    if (whichGame = gameFour)
    {
        string player1Answer;

        string player2guess;

        string guessedAnswer;


        std::cout << "Enter a word to be guessed\n";

        std::cin >> player1Answer;


        for (int i = 0; i < player1Answer.length(); i++)
        {
            guessedAnswer.append("*");
        }


        while (guessedAnswer != player1Answer)
        {
            std::cout << "\nCurrent word: " << guessedAnswer << endl;

            std::cout << "Enter a letter to be guessed\n";

            std::cin >> player2guess;


            bool foundAny = false;

            for (int i = 0; i < player1Answer.length(); i++)
            {
                if (player1Answer[i] == player2guess[0])
                {
                    guessedAnswer[i] = player1Answer[i];

                    foundAny = true;
                }
            }

            if (foundAny)
            {
                std::cout << "You got one letter!\n";
            }
            else
            {
                std::cout << "That is not a letter in this word! :(\n";
            }
        }

        std::cout << "You've guessed the word right! :) It was: " << player1Answer << endl;

    }
    system("cls");

    if (whichGame == 5)
    {
        system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ&list=RDdQw4w9WgXcQ&start_radio=1");

    }

    return 0;
}

