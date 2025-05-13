#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Character {
protected:
    string name;
    int health;
    int stamina;

public:
    Character(string name, int health, int stamina) : name(name), health(health), stamina(stamina) {}

    void showStats() const {
        cout << name << " | Health: " << health << " | Stamina: " << stamina << endl;
    }
};

// class Player : public Character {
// private:
    

// public:

// };

int main () {
    Character sjors("sjors", 100, 100);
    Character ryan("ryan", 100, 100);
    Character tijs("tijs", 50, 200);
    Character erin("erin", 25, 10);

    sjors.showStats();
    ryan.showStats();
    tijs.showStats();
    erin.showStats();

    return 0;
}