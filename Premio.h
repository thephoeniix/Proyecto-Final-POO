/*
* ITESM Querétaro
* Programación Orientada a Objetos
* Proyecto
* Karina Fernanda Maldonado Murillo A01707516
* 04/12/2020
*/

#include <sstream>

using namespace std;

/*
* La clase Premio contiene métodos que guardan nombre, nominación y año
*/

class Premio {
    private:
        //Declaro las variables de estancia
        string name;
        string nomination;
        int year;
    public:
        //Constructor
        Premio(): name(""), nomination(""), year(0){}; ///Default
        Premio(string n, string nom, int y): name(n), nomination(nom), year(y){}; //Recibe valores de instancia
    
        //Getters
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
