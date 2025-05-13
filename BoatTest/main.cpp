#include <string>
#include <iostream>
using namespace std;

class boat {
    protected:
        string typeName;
        string boatName;
        int topSpeed;
    public:
        boat (string typeName, string boatName, int topSpeed) : typeName(typeName), boatName(boatName), topSpeed(topSpeed){}
        
        void boatInfo() {
            cout << "Aye Cap'n, she's a "<< typeName << " named "<< boatName << ", and she tops out at "<< topSpeed <<" knots!"; 
        }
};

class brig : public boat{
    
};

int main() {
    boat cornstar("Brigantine", "The Cornstar", 8);

    cornstar.boatInfo();

    return 0;
};