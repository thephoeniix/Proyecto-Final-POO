/*
* ITESM Querétaro
* Programación Orientada a Objetos
* Proyecto
* Karina Fernanda Maldonado Murillo A01707516
* 04/12/2020
*/

#include <sstream>

#include "Persona.h"
using namespace std;
/*
* Declaro objeto Actor que hereda de Persona
*/
class Actor: public Persona{
    private:
        //Variables de instancia del objeto
        string personaje;

    public:
         //Metodos del objeto
    
        //CONSTRUCTORES 
        Actor(): Persona(){ //POR DEFAULT
            personaje = "";
        }
        
        //Constructor que recibe nombre y edad
        Actor(string nombre, int edad, string pers): Persona(nombre,edad){
            personaje = pers;
        }
        
        //Getter de Personaje
        string getPersonaje(){
            return personaje;
        };
         
        /*
        * Se crea un metodo de tipo "void" para que se le pueda asignar un premio al Actor
        * donde se utiliza el arreglo ya hecho y guardan ahí los datos.
        */
    
         void ganarPremio (string name, int year) {
            Premio newPremio(name, "Mejor actor", year);
            premios[numero_premios] = newPremio;
            numero_premios++;
         };
    
        //Metodo que imprime los Datos del Actor como Nombre, Edad y Personaje. 

         void printDatos() {
            cout<< "\n Actor: " << getName() << endl;
            cout<< "Edad: " << getAge() << endl;
            cout<< "Personaje: " << getPersonaje() << endl;
        }
};


//Declaro objeto Extra que hereda de Persona
class Extra: public Persona{
    //Variables de instancia del objeto
    private:
        int escena;

    public:
    //Metodo del objeto
    
    //CONSTRUCTORES 
        Extra(): Persona(){ //DEFAULT
            escena = 0;
        }
     //Constructor que recibe nombre y edad
        Extra(string nombre, int edad, int esc): Persona(nombre,edad){
            escena = esc;
        }
        
    //Getter de Escena.
        int getEscena(){
            return escena;
        };
  
     /*
     * Se crea un metodo de tipo "void" para que se le pueda asignar un premio al Extra
     * donde se utiliza el arreglo ya hecho y guardan ahí los datos.
     */
         void ganarPremio () {
             cout<< "None";
         };

    //Metodo que imprime datos del Extra como Nombre, Edad y Escena.
        void printDatos() {
            cout<< "\n Extra: " << getName() << endl;
            cout<< "Edad: " << getAge() << endl;
            cout<< "Escena: " << getEscena() << endl;
        }

};

//Declaro objeto Actor que hereda de Persona
class Director: public Persona{
    private:
        //Variables de instancia del objeto
        int salario;

    public:
        //Metodos del objeto
    
        //CONSTRUCTORES 
        Director(): Persona(){ //DEFAULT
            salario = 0;
        }
        
        //Constructor que recibe nombre y edad
        Director(string nombre, int edad, int sal): Persona(nombre,edad){
            salario = sal;
        }
    
        //Getter de Salario
        int getSalario(){
            return salario;
        };
    
        /*
        * Se crea un metodo de tipo "void" para que se le pueda asignar un premio al Director
        * donde se utiliza el arreglo ya hecho y guardan ahí los datos.
        */

        void ganarPremio  (string name, int year) {
            Premio newPremio(name, "Mejor Director", year);
            premios[numero_premios] = newPremio;
            numero_premios++;
        };
    
       //Metodo que imprime los Datos del Director como Nombre, Edad y Salario. 


        void printDatos() {
            cout<< "\n Director: " << getName() << endl;
            cout<< "Edad: " << getAge() << endl;
            cout<< "Salario: " << getSalario() << endl;
        }
};

