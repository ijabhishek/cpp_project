#include <iostream>
#include <cmath>

void tempConvertor()
{
    double temp;
    char unit;

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert  to : ";
    std::cin >> unit;
    unit = tolower(unit);

    if (unit == 'f')
    {
        std::cout << "Enter the temperature in celsius: ";
        std::cin >> temp;
        temp = (temp * 9 / 5) + 32;
        std::cout << "Temperature in celsius: " << temp << "C";
    }
    else if (unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32) * 5 / 9;
        std::cout << "Temperature in celsius: " << temp << "F";
    }
}

void rerun()
{
    char response;
    std::cout << "\n Do you want to convert again:(y/n) \n";
    std::cin >> response;
    if (response == 'y')
    {
        tempConvertor();
    }
    else
    {
        std::cout << "Programe has been completed";
    }
}

int main()
{
    std::cout << "***********Calculator***************\n";
    tempConvertor();
    rerun();
}
