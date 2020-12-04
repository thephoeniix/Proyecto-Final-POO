/*
* ITESM Querétaro
* Programación Orientada a Objetos
* Proyecto
* Karina Fernanda Maldonado Murillo A01707516
* 04/12/2020
*/

#include <sstream>
#include "Elenco.h"

using namespace std;
/*
* La clase Pelicula contiene métodos para el manejo de Peliculas que  
* también guarda datos del archivo Elenco.h (Director, Extra y Actores) 
*/

class Pelicula {
    //Declaro las varibles de estancia 
    private:
        string title;
        int year;
        int duration;
        int sales;
    public:
        //Constructor
        Pelicula(): title(""), year(0), duration(0), sales(0), numero_actores(0), numero_extras(0){}; //Default
        Pelicula(string t, int y, int d, int s): title(t), year(y), duration(d), sales(s), numero_actores(0), numero_extras(0){}; //Constructor donde recibe valores para 
        //llenar las variables de instancia

        //Se crea un arreglos para ahí guardar los datos que se asignen a las peliculas
        Actor actores[50];
        int numero_actores;
    
        
        Extra extras[100];
        int numero_extras;

        Director director;

        
        //Getters de TItulo, Año, Duración y Ventas de la pelicula.
        string getTitle(){
            return title;
        };

        int getYear(){
            return year;
        };

        int getDuration(){
            return duration;
        };

        int getSales(){
            return sales;
        };
    
        //Getters de Actores que guarda los datos 
        void getActores() {
            for(int i=0; i<numero_actores; i++){
                cout<< actores[i].getName()<< endl;
                }
        };

         void getExtras(){
            for(int i=0; i<numero_extras; i++){
                cout<< extras[i].getName()<< endl;
                }
        };

        void getDirector(){
            cout<< director.getName()<< endl;
        };
    
        //Metodos de tipo "void" que imprimen los Actores, Extras y Director
        void imprimirActores() {
            cout << "ACTORES DE LA PELICULA: " << title << endl;
            for(int i = 0; i<numero_actores; i++) {
                actores[i].printDatos();
            }
        }

        void imprimirExtras() {
            cout << "EXTRAS DE LA PELICULA: " << title << endl;
            for(int i = 0; i<numero_actores; i++) {
                extras[i].printDatos();
            }
        }

        void imprimirDirector() {
            cout << "DIRECTOR DE LA PELICULA: " << title << endl;
           director.printDatos();
        }
    
        //Se crea metodos de tipo "void" donde se llaman a las clases del archivo Elenco.h y se van guardando en el arreglo, donde al final se imprimen  
        void asignarActor(Actor actor){
            actores[numero_actores] = actor;
            numero_actores++;

            imprimirActores();
        }

        void asignarExtra(Extra extra){
            extras[numero_extras] = extra;
            numero_extras++;

            imprimirExtras();
        }

        void asignarDirector(Director d) {
            director = d;

            imprimirDirector();
        }

};
