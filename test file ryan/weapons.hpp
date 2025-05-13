#include <iostream>
#include <string>
#include <vector>
#ifndef WEAPONS_HPP
#define WEAPONS_HPP

using namespace std;

class weapons
{
protected:
    string Name;
    int Damage;
    int Range;

public:
    weapons(string Name, int Damage, int Range);

    void Fire(){
    };
};

#endif