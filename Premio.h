#include <sstream>

using namespace std;

class Premio {
    private:
        string name;
        string nomination;
        int year;
    public:
        Premio(): name(""), nomination(""), year(0){};
        Premio(string n, string nom, int y): name(n), nomination(nom), year(y){};
        string getName(){
            return name;
        };
        string getNomination() {
            return nomination;
        };
        int getYear() {
            return year;
        };
};
