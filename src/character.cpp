/**
 * @file character.cpp
 * @author Aaron Parfitt (aaronparfitt123@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-10-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <string>
#include "character.h"

using namespace std;

GameCharacter::GameCharacter(int health)
{
    name = name;
    health = health;
}

int GameCharacter::GetHealth()
{
    return health;
}

void GameCharacter::SetName(string new_name)
{
    name = new_name;
}

string GameCharacter::GetName()
{
    return name;
}