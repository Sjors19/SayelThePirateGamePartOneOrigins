#include <string>
#include <iostream>
using namespace std;

class boat {
    protected:
        string typeName;
        string boatName;
        int topSpeed;
    public:
        void boatInfo() {
            cout << "Aye Cap'n, she's a "<< typeName << " named "<< boatName << ", and she tops out at "<< topSpeed <<" knots!"; 
        }
};
