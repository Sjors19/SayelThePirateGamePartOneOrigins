#include "weapons.hpp"
#include <iostream>

using namespace std;

Weapon::Weapon(const string Name, int Damage, int Range) : Name(Name), Damage(Damage), Range(Range) {}

void Weapon::Fire() {
    cout << "Firing " << Name << " with attack power " << Damage << "!" << endl;
}

string Weapon::GetName() {
    return Name;
}

int Weapon::GetDamage() {
    return Damage;
}

int Weapon::GetRange() {
    return Range;
}
