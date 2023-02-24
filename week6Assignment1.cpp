///*
//Phillip Monteiro
//Week 5 lab assignment
//Feb 22, 2023

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int playerScore = 0;
int computerScore = 0;
int drawScore = 0;
char playerChoice;
char computerChoice;

char getComputerChoice() 
{
    srand(time(NULL));
    int choice = rand() % 3 + 1;
    
    if (choice == 1) return 'r';
    if (choice == 2) return 'p';
    if (choice == 3) return 's';
}

char getPlayerChoice()
{
    char pChoice;

    cout << "Enter one of the following options:" << endl;
    cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
    cin >> pChoice;
    cout << endl << endl;

    while (pChoice != 'r' && pChoice != 'p' && pChoice != 's')
    {
        cout << "Invalid entry. Please enter one of the following options only: " << endl;
        cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl << endl;
        cin >> pChoice;
    }
    return pChoice;
}

void showChoice(char choice)
{
    if (choice == 'r') cout << "ROCK" << endl;
    if (choice == 'p') cout << "PAPER" << endl;
    if (choice == 's') cout << "SCISSORS" << endl;
}

void determineWinner(char player, char computer)
{
    if ((player == 'r' && computer == 's') || (player == 'p' && computer == 'r') || (player == 's' && computer == 'p'))
    {
        std::cout << "You win!\n";
        ++playerScore;
    }
    else if ((player == 'r' && computer == 'p') || (player == 'p' && computer == 's') || (player == 's' && computer == 'r'))
    {
        std::cout << "Oh no! The computer wins :(\n";
        ++computerScore;
    }
    else if (player == computer)
    {
        std::cout << "Draw...\n";
        ++drawScore;
    }
    else
    {
        std::cout << "Error, invalid entry.";
    }
}

int main()
{
    string userName;
    string fileName;

    do
    {
        cout << "Enter username: ";
        getline(cin, userName);
        if (userName.length() < 8)
        {
            cout << "Invlaid entry. Username must be at least 8 characters." << endl;
        }
    } while (userName.length() < 8);

    fileName = userName + ".txt";
    
    ifstream inFile(fileName);
    if (inFile.is_open())
    {
            char response;
    
            do
            {
                cout << "Username already exists. Do you want to proceed and load save data for " << userName << "? (y/n)" << endl;
                cin >> response;

                if (response != 'y' && response != 'n') cout << "Invalid Entry. Please enter 'y' or 'n'\n" << endl;

            } while (response != 'y' && response != 'n');

            if (response == 'y')
            {
                inFile >> playerScore, computerScore, drawScore;
                cout << "Welcome back " << userName << ". Your save file has been loaded." << endl;
            }
            else if (response == 'n') return 0; //Close program if user does not want to proceed
    }
    else
    {
        cout << userName << " username not found. Now creating new save file..." << endl << endl;
        ofstream outfile(fileName);
    }



    string playerName;
   
    cout << endl << endl << "Welcome to Rock, Paper, Scissors!" << endl << endl;
    cout << "Please enter your name." << endl;
    getline(cin, playerName);
    cout << endl << "Welcome " << playerName << "! Prepare to play..." << endl << endl;

    char playAgain;
    int gameCounter = 0;

    do
    {
        gameCounter++;

        cout << "========\n"
             << "Round " << gameCounter << endl
             << "========\n" << endl;
        
        computerChoice = getComputerChoice();
        playerChoice = getPlayerChoice();

        cout << playerName << " entered ";
        showChoice(playerChoice);
        cout << endl;
        cout << "The computer entered ";
        showChoice(computerChoice);
        cout << endl;
        
        determineWinner(playerChoice, computerChoice);
        
        cout << endl << endl;

        cout << "Scoreboard\n"
             << "-----------\n"
             << playerName << ": " << playerScore << endl
             << "Computer: " << computerScore << endl 
             << "Draw: " << drawScore << endl << endl;
        
         do
         {
             cout << "Play again? (y/n)\n";
             cin >> playAgain;
        
             if (playAgain != 'y' && playAgain != 'n') cout << "Invalid Entry. Please enter 'y' or 'n'\n" << endl;
        
         } while (playAgain != 'y' && playAgain != 'n');
        
         cout << endl;

    } while (playAgain == 'y'); //Play again loop

    return 0;
} //*/

