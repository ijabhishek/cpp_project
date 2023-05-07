/*
********Hello Dost**********
@ijabhishek
**********
if you find any mistak or think any better of this please let me know... I would love to know that..
***********
*****************************Thank You*****************
*/
#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
void playAgain();
void mainCode();

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your Choice: ";
    showChoice(player);
    computer = getComputerChoice();
    std::cout << "Computer Choice: ";
    showChoice(computer);
    chooseWinner(player, computer);
    playAgain();

    std::cout << "************Rock Paper Scissor*************";
    return 0;
}

char getUserChoice()
{
    char player;

    do
    {
        std::cout << "\nRock-Paper-Scissors Game!\n";
        std::cout << "r for rock\n";
        std::cout << "p for paper\n";
        std::cout << "s for scissor\n";
        std::cin >> player;
        player = tolower(player);

        if (player != 'p' && player != 'r' && player != 's')
        {
            std::cout << "Please type valid input (r,p,s) ";
        }

    } while (player != 'r' && player != 'p' && player != 's');
    return player;
}
char getComputerChoice()
{
    srand(time(0));
    char choice = (rand() % 3) + 1;
    switch (choice)
    {
    case 1:
        return 'p';
    case 2:
        return 's';
    case 3:
        return 'r';
    }
    return choice;
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n ";
        break;
    case 'p':
        std::cout << "Paper\n ";
        break;
    case 's':
        std::cout << " Scissor\n ";
        break;
    }
}
void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "It's a tie!";
        }
        else if (computer == 'p')
        {
            std::cout << "oops! better luck next time\n Computer is the winer\n";
        }
        else if (computer == 's')
        {
            std::cout << "Yehh! Your are the winer \n ";
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            std::cout << "Yehh! Your are the winer \n";
        }
        else if (computer == 'p')
        {
            std::cout << "It's a tie! \n";
        }
        else if (computer == 's')
        {
            std::cout << "oops! better luck next time\n Computer is the winer \n ";
        }
        break;
    case 's':
        if (computer == 'r')
        {
            std::cout << "oops! better luck next time...Computer is the winer \n ";
        }
        else if (computer == 'p')
        {
            std::cout << "Yehh! Your are the winer \n";
        }
        else if (computer == 's')
        {
            std::cout << "It's a tie! \n";
        }
        break;
    }
}
void playAgain()
{
    char choice;
    std::cout << "Do you want to play again(y/n) \n";
    std::cin >> choice;
    if (choice == 'y')
    {
        mainCode();
    }
    else if (choice == 'n')
    {
        std::cout << "Thank you but are your sure want to exit?(y/n) \n";
        std::cin >> choice;
        if (choice == 'y')
        {
            mainCode();
        }
        else
        {
            std::cout << "Ok byyeeeee see you soooooooonnn\n";
        }
    }
    else
    {
        std::cout << "Thank you!!!!\n";
    }
}

void mainCode()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your Choice: ";
    showChoice(player);
    computer = getComputerChoice();
    std::cout << "Computer Choice: ";
    showChoice(computer);
    chooseWinner(player, computer);
    playAgain();
}