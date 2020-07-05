#include <iostream>
#include <cstdlib>
#include "game.hpp"

int main()
{
  srand(time(NULL));
  int choice;
  do
  {
    std::cout << "0. Quit\n"
              << "1. Play\n";
    std::cin >> choice;

    switch (choice)
    {
    case 0:
      std::cout << "Bye!\n";
      break;
    case 1:
      play_game();
      break;
    }

  } while (choice);
}