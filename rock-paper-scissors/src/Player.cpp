#include "Player.h"

Choice Player::getChoice() const
{
    int value;
    std::cout << "1. Rock" << std::endl;
    std::cout << "2. Paper" << std::endl;
    std::cout << "3. Scissors" << std::endl;

    do
    {
        std::cout << "Make a selection: ";
        std::cin >> value;
    } while (value < 1 || value > 3);

    return static_cast<Choice>(value);
}
