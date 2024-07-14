#include "RockPaperScissors.h"

void RockPaperScissors::play()
{
    std::cout << termcolor::green << "Game started!" << termcolor::reset << std::endl;

    playerChoice = player.getChoice();
    opponentChoice = opponent.getChoice();

    showAnimatedAsciiArt();

    std::cout << "Player Input: " << choiceToString(playerChoice) << std::endl;
    std::cout << "Opponent Input: " << choiceToString(opponentChoice) << std::endl;

    Result result = getResult();

    displayResult(result);
}

Result RockPaperScissors::getResult()
{
    if (playerChoice == opponentChoice)
    {
        return Result::Draw;
    }

    bool playerWins = (playerChoice == Choice::Rock && opponentChoice == Choice::Scissors) ||
                      (playerChoice == Choice::Paper && opponentChoice == Choice::Rock) ||
                      (playerChoice == Choice::Scissors && opponentChoice == Choice::Paper);

    return playerWins ? Result::PlayerWon : Result::OpponentWon;
}

void RockPaperScissors::displayResult(Result result) const
{
    if (result == Result::Draw)
    {
        std::cout << termcolor::yellow << "Draw!!" << termcolor::reset << std::endl;
    }
    else if (result == Result::PlayerWon)
    {
        std::cout << termcolor::green << "You Won!!" << termcolor::reset << std::endl;
    }
    else
    {
        std::cout << termcolor::red << "Opponent Won!!" << termcolor::reset << std::endl;
    }
}

std::string RockPaperScissors::choiceToString(Choice choice) const
{
    switch (choice)
    {
    case Choice::Rock:
        return "Rock";
    case Choice::Paper:
        return "Paper";
    case Choice::Scissors:
        return "Scissors";
    }
}

void RockPaperScissors::clearConsole() const
{
    // ANSI escape code for Unix-like systems
    std::cout << "\033[2J\033[H" << std::flush;
}

void RockPaperScissors::showAnimatedAsciiArt() const
{

    const char *frames[] = {
        "Rock...\n",
        "Paper...\n",
        "Scissors...\n"};

    for (int i = 0; i < 3; ++i)
    {
        // Clear the terminal window and reposition cursor
        clearConsole();
        std::cout << termcolor::green << frames[i] << termcolor::reset << std::flush;
        // Pause for 500 milliseconds
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    clearConsole();
}