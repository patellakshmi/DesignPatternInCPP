#include <iostream>
using namespace std;

class House {
private:
    static int numberOfHouses; //number of houses there are total
    int houseSize; //int from 1 to 10
    int occupants;
    int maxOccupants;
public:
    House() {
        maxOccupants = 4;
        occupants = 1;
        houseSize = 1;
        ++numberOfHouses;
    }
    static int getnumOfHouses() {return numberOfHouses;}
};

int House::numberOfHouses = 0;

int main() {
    House house1;
    House house2;

    cout << "The number of houses I have created is..." << House::getnumOfHouses() << ".\n";

    return 0;
}