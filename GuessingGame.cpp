

#include <iostream>

void guessGame()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 20) + 1;

    do
    {
        std::cout << " Enter a number between(1-20): ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << " Too high";
        }
        else if (guess < num)
        {
            std::cout << " Too low";
        }
        else
        {
            std::cout << "Correct!  # of tries " << tries << "\n";
        }

    } while (guess != num);

    std::cout << "\n**************Number guessing game**********\n";
}

int main()
{
    std::cout << " ******* Guessing Game********\n";
    guessGame();
    char answer;
    std::cout << "\n Do you want to play again(y/n)";
    std::cin >> answer;
    answer = tolower(answer);
    switch (answer)
    {
    case 'y':
        guessGame();
        break;
    case 'n':
        std::cout << "Are you sure want to exit(y/n)";
        std::cin >> answer;
        if (answer == 'y')
        {
            guessGame();
        }
        else
        {
            break;
        }
    default:
        break;
    }
}
