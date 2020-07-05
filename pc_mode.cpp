#include <iostream>
#include <cstdlib>

int pc_mode()
{
    int pc_guesses = 1, range, init_pc_guess, next_pc_guess, user_choice, direction, upper_limit, lower_limit;
    range = ((rand() % 11) + 1) * 10;
    init_pc_guess = rand() % (range + 1);
    upper_limit = range;
    lower_limit = 0;
    std::cout << "Welcome to the pc mode where you will choose a number and pc will try and guess it!\n";
    std::cout << "So choose the number between 0 and " << range << std::endl;
    std::cin >> user_choice;
    do
    {
        std::cout << "Is it " << next_pc_guess << " ?\n";
        std::cout << "0. Lower\n"
                  << "1. Higher\n";
        std::cin >> direction;
        if (direction)
        {
            if (next_pc_guess < user_choice)
            {
                lower_limit = next_pc_guess + 1;
                next_pc_guess = upper_limit - (rand() % ((upper_limit - lower_limit) + 1));
                pc_guesses++;
            }
            else
            {
                std::cout << "Dont lie to me!\n";
            }
        }
        else
        {
            if (next_pc_guess > user_choice)
            {
                upper_limit = next_pc_guess - 1;
                next_pc_guess = upper_limit - (rand() % ((upper_limit - lower_limit) + 1));
                pc_guesses++;
            }
            else
            {
                std::cout << "Be honest please...\n";
            }
        }

    } while (next_pc_guess != user_choice);
    std::cout << "It was " << next_pc_guess << ". I won...\n";
    return pc_guesses;
}