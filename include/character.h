/**
 * @file character.h
 * @author Aaron Parfitt (aaronparfitt123@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <string>


using namespace std;

class GameCharacter{
    public:
        GameCharacter(int health);
        int GetHealth();
        void SetName(string name);
        string GetName();
    private:
        int health;
        string name; 
};

