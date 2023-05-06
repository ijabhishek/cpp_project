#include <iostream>
#include <cmath>
void calculator()
{

    char oprand;
    double num1;
    double num2;
    while (oprand != '*' && oprand != '+' && oprand != '/' && oprand != '-')
    {

        std::cout << "What you want to do(+ - * /): ";
        std::cin >> oprand;
    }

    std::cout << "Enter first number ";
    std::cin >> num1;
    std::cout << "Enter second numbre ";
    std::cin >> num2;

    switch (oprand)
    {
    case '+':
        std::cout << "result: " << num1 + num2;
        break;

    case '-':
        std::cout << "result: " << num1 - num2;
        break;

    case '*':
        std::cout << "result: " << num1 * num2;
        break;

    case '/':
        std::cout << "result: " << num1 / num2;
        break;
    default:
        std::cout << "Please type valid input";
    }
}

void rerun()
{
    char answer;
    std::cout << "do you want to do something else: (y/n): ";
    std::cin >> answer;
    switch (answer)
    {
    case 'y':
        calculator();
        break;

    case 'n':
        break;

    default:
        std::cout << "Please enter valid input";
        calculator();
        break;
    }
}

int main()
{

    std::cout << "****************Calculator****************\n";
    calculator();
    std::cout << "\n";
    rerun();

    std::cout << "\n*******Finished**********";
}
