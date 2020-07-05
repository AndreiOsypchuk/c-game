#include <cstdlib>
#include <iostream>
#include "modes.hpp"
void play_game()
{
    int mode;
    int user_score = 0;
    int pc_score = 0;

    do
    {
        std::cout << "Choose game mode:\n";
        std::cout << "1. You guess.\n"
                  << "2. PC guesses\n"
                  << "0. Go back\n";
        std::cin >> mode;
        switch (mode)
        {
        case 1:
            user_score += user_mode();
            std::cout << "Score is: "
                      << "You :" << user_score << " PC:" << pc_score << std::endl;
            break;
        case 2:
            pc_score += pc_mode();
            std::cout << "Score is: "
                      << "You :" << user_score << " PC:" << pc_score << std::endl;
        }
    } while (mode);
}