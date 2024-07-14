#include "Opponent.h"
#include <random>

Choice Opponent::getChoice()
{
    return static_cast<Choice>(generateRandomNumber());
}

int Opponent::generateRandomNumber()
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<int> distrib(1, 3);
    
    return distrib(rng);
}
