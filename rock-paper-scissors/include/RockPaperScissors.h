#ifndef ROCKPAPERSCISSORS_H
#define ROCKPAPERSCISSORS_H

#include "Player.h"
#include "Opponent.h"
#include "Result.h"
#include "Choice.h"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <termcolor/termcolor.hpp>

class RockPaperScissors
{
public:
    void play();

private:
    Player player;
    Opponent opponent;
    Choice playerChoice;
    Choice opponentChoice;

    Result getResult();
    void displayResult(Result result) const;
    std::string choiceToString(Choice choice) const;
    void clearConsole() const;
    void showAnimatedAsciiArt() const;
};

#endif // ROCKPAPERSCISSORS_H
