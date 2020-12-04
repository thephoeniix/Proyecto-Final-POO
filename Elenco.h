#include <sstream>

#include "Persona.h"
using namespace std;

class Actor: public Persona{
    private:
        string personaje;

    public:
        Actor(): Persona(){
            personaje = "";
        }
        Actor(string nombre, int edad, string pers): Persona(nombre,edad){
            personaje = pers;
        }

        string getPersonaje(){
            return personaje;
        };

         void ganarPremio (string name, int year) {
            Premio newPremio(name, "Mejor actor", year);
            premios[numero_premios] = newPremio;
            numero_premios++;
         };

         void printDatos() {
            cout<< "\n Actor: " << getName() << endl;
            cout<< "Edad: " << getAge() << endl;
            cout<< "Personaje: " << getPersonaje() << endl;
        }
};


class Extra: public Persona{
    private:
        int escena;

    public:
        Extra(): Persona(){
            escena = 0;
        }

        Extra(string nombre, int edad, int esc): Persona(nombre,edad){
            escena = esc;
        }
        int getEscena(){
            return escena;
        };

         void ganarPremio () {
             cout<< "None";
         };


        void printDatos() {
            cout<< "\n Extra: " << getName() << endl;
            cout<< "Edad: " << getAge() << endl;
            cout<< "Escena: " << getEscena() << endl;
        }

};


class Director: public Persona{
    private:
        int salario;

    public:
        Director(): Persona(){
            salario = 0;
        }
        Director(string nombre, int edad, int sal): Persona(nombre,edad){
            salario = sal;
        }

        int getSalario(){
            return salario;
        };

        void ganarPremio  (string name, int year) {
            Premio newPremio(name, "Mejor Director", year);
            premios[numero_premios] = newPremio;
            numero_premios++;
        };

        void printDatos() {
            cout<< "\n Director: " << getName() << endl;
            cout<< "Edad: " << getAge() << endl;
            cout<< "Salario: " << getSalario() << endl;
        }
};

