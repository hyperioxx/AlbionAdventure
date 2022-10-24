/**
 * @file game.cpp
 * @author Aaron Parfitt (aaronparfitt123@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-10-22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <signal.h>
#include "game.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>


using namespace std;

void handler(int s)
{
    printf("Caught signal %d\n", s);
    exit(1);
}

string Game::GetPlayerInput()
{
    string input;
    cout << "$ ";
    cin >> input;
    return input;

}

void Game::PrintLogo() 
{
   string logo;
   ifstream Logo("./assets/logo.txt");
   while(getline(Logo, logo)){
       cout << logo << endl;
   }

}

int Game::Run()
{
    PrintLogo();
    signal(SIGINT, handler);
    running = true;
    while (running)
    {
        string input = GetPlayerInput();

        if(input == "exit"){
            running = false;
        }
        else if (input == "help")
        {
            cout << "help menu" << endl;
        }
        else if (input == "move")
        {
            cout << "help menu" << endl;
        }
        else {
            cout << "unknown command" << endl;
        }
    }
    return 0;
}