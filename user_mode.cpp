#include <iostream>
#include <cstdlib>

int user_mode()
{
    int user_guesses = 1, range, pc_choice, user_guess;
    std::cout << "Welcome to the user mode where you have to guess the number with minimum amount of tries!\n";
    std::cout << "Enter the range: ";
    std::cin >> range;
    pc_choice = rand() % (range + 1);
    std::cout << "Now guess the number between 0 and " << range << std::endl;
    do
    {
        std::cin >> user_guess;
        if (user_guess < pc_choice && pc_choice - user_guess != 1)
        {
            std::cout << "Try a bit higher\n";
            user_guesses++;
        }
        else if (user_guess > pc_choice && user_guess - pc_choice != 1)
        {
            std::cout << "Go lower\n";
            user_guesses++;
        }
        else if (user_guess - pc_choice == 1 || pc_choice - user_guess == 1)
        {
            std::cout << "So close...\n";
            user_guesses++;
        }
        else
        {
            std::cout << "It took you " << user_guesses << " try/s to guess\n";
            break;
        }
    } while (true);

    return user_guesses;
}