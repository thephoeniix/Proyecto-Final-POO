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
* La clase Persona contiene métodos para el manejo de Peliculas que   
*/

class Persona {
    //Declaro las variables de estancia 
    private:
        string name;
        int age;

    public:
        //Constructor
        Persona(): name(""), age(0), numero_premios(0){}; //Default
        Persona(string n, int a): name(n), age(a), numero_premios(0){};
        //Lllenar las variables de instancia

        //Se crea un arreglo para ahí guardar los datos que se asignen
        Premio premios[100];
        int numero_premios;


        //Getters
        string getName(){
            return name;
        };
        int getAge(){
            return age;
        };
    
        Premio* getPremios(){
            return premios;
        };
        int getNumeroPremios(){
            return numero_premios;
        };
        //Setters
        void setNumeroPremios(int num_prem){
            numero_premios=num_prem;
        };
    
        //Se crea un metodo donde se guarda un nuevo premio 
        void ganarPremio (string nominacion, string name, int year) {
            Premio newPremio(name, nominacion, year);
            premios[numero_premios] = newPremio;
            numero_premios++;
        };
        //imprime datos de la Persona
        void printDatos() {
            cout<< "\n Persona: " << getName() << endl;
            cout<< "Edad: " << getAge() << endl;
        }
        //Imprime datos del Premio que gano la Persona
        void listarPremio(){
            for(int i=0; i< numero_premios; i++){
                cout<< "Nombre de Premio: " << premios[i].getName() << endl;
                cout<< "Ano: " << premios[i].getYear() << endl;
                cout<< "Nominacion: " <<premios[i].getNomination() << endl;
            }

        }

};


