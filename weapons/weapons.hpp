#include <iostream>
#include <string>
#include <vector>
#ifndef WEAPONS_HPP
#define WEAPONS_HPP

using namespace std;

class Weapon
{
protected:
    string Name;
    int Damage;
    int Range;

public:
    Weapon(string Name, int Damage, int Range);
    string GetName();
    int GetDamage();
    int GetRange();
    void Fire();
};

#endif