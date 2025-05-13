#include <string>
#include <iostream>
using namespace std;

class boat {
    protected:
        string typeName;
        string boatName;
        string captainName;
        int topSpeed;
    public:
        boat (string typeName, string boatName,string captainName, int topSpeed) : typeName(typeName), boatName(boatName), captainName(captainName), topSpeed(topSpeed){}
        
        void boatInfo() {
            cout << "Aye Cap'n, she's a "<< typeName << " named "<< boatName << ", and she tops out at "<< topSpeed <<" knots!" << endl; 
        }
};

class brig : public boat{
    private: 
        int parrotAmount;

    public:
    brig (string boatName, string captainName, int parrotAmount) : boat ("Brigantine", boatName, captainName, 8), parrotAmount(parrotAmount){}
    
    void HowManyParrots() {
        cout << "Yarrr there be " << parrotAmount << " parrots aboard LADS!" << endl;
    }
    
};

int main() {
    boat cornstar("Galleon", "The Cornstar", "sjors the vile", 10);

    cornstar.boatInfo();

    brig DeSlappePiemel("de Slappe Piemel", "Erin The Flacid", 3);
    DeSlappePiemel.boatInfo();
    DeSlappePiemel.HowManyParrots();

    return 0;
};