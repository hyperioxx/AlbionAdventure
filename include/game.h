/**
 * @file game.h
 * @author Aaron Parfitt (aaronparfitt123@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-10-22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <string>

using namespace std;

class Game
{
public:
    int Run();
    string GetPlayerInput();
    void PrintLogo();

private:
    bool running;
    void exit(int);
};