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

using namespace std;

void handler(int s)
{
    printf("Caught signal %d\n", s);
    exit(1);
}

string Game::GetPlayerInput(){
    string input;
    cout << "edathra> ";
    cin >> input;
    return input;

}

int Game::Run()
{
    signal(SIGINT, handler);
    running = true;
    while (running)
    {
        string input = GetPlayerInput();
        if(input == "exit"){
            running = false;
        };
    }
    return 0;
}