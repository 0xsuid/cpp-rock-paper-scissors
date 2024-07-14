#ifndef OPPONENT_H
#define OPPONENT_H

#include "Choice.h"

class Opponent
{
public:
    Choice getChoice();

private:
    int generateRandomNumber();
};

#endif // OPPONENT_H
