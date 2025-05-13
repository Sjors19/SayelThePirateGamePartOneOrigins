#include <iostream>
#include <string>
#include <vector>
#define CATCH_CONFIG_MAIN  // generates main()
// #include "catch2/catch.hpp"


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

class Player : public Character {
private:
    

public:
    Player(string name, int health, int stamina) : Character(name, health, stamina) {}

    void speak() {
        if (name == "sjors") {
            cout << name << " says: Make that Scallywag walk the Plank!" << "\n" << endl;
        }
        else if (name == "tijs") {
            cout << name << " says: Kom je gezellig mee klimmen?" << "\n" << "Oh ja! En kaas is goated!" << "\n" << endl;
        }
        else {
            cout << name << " says: Yar Scallywags!" << "\n" << endl;
        }
    }
};

int main () {
    Player sjors("sjors", 100, 100);
    Player ryan("ryan", 100, 100);
    Player tijs("tijs", 50, 200);
    Player erin("erin", 25, 10);

    sjors.showStats();
    sjors.speak();

    ryan.showStats();
    ryan.speak();

    tijs.showStats();
    tijs.speak();

    erin.showStats();
    erin.speak();

    return 0;
}
