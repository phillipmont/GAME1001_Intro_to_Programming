///*
//Phillip Monteiro
//Week 5 lab assignment
//Feb 22, 2023


#include <iostream>

using namespace std;

char getComputerChoice() 
{
    srand(time(0));
    int num = rand() % 3 + 1;

    if (num == 1) return 'r';
    if (num == 2) return 'p';
    if (num == 3) return 's';
}

char getPlayerChoice()
{
    char pChoice;
    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Choose one of the following options" << endl;
    cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
    cin >> pChoice;

    while (pChoice != 'r' && pChoice != 'p' && pChoice != 's')
    {
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
        cin >> pChoice;
    }
}

void showPlayerChoice(char choice)
{
    if (choice == 'r') cout << "Rock" << endl;
    if (choice == 'p') cout << "Paper" << endl;
    if (choice == 's') cout << "Scissors" << endl;
}

void determineWinner(char player, char computer)
{
    if ((player == 'r' && computer == 's') || (player == 'p' && computer == 'r') || (player == 's' && computer == 'p'))
    {
        std::cout << "You win!\n";
        ++playerWins;
    }
    else if ((player == 'r' && computer == 2) || (player == 2 && computer == 3) || (player == 3 && computer == 1))
    {
        std::cout << "Computer win!\n";
        ++computerWins;
    }
    else if (player == computer)
    {
        std::cout << "Tied\n";
    }
    else
    {
        std::cout << "Error, please use and input between 1-3\n";
    }
    std::cout << "Your score is currently " << playerWins << ", Computer score is " << computerWins << "\n";
    std::cout << "============================================================================\n";
}












while (playagain == y)
{
    ++gamesCount;



    
}