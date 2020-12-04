#include <sstream>
#include "Elenco.h"

using namespace std;

class Pelicula {
    private:
        string title;
        int year;
        int duration;
        int sales;
    public:
        Pelicula(): title(""), year(0), duration(0), sales(0), numero_actores(0), numero_extras(0){};
        Pelicula(string t, int y, int d, int s): title(t), year(y), duration(d), sales(s), numero_actores(0), numero_extras(0){};

        Actor actores[50];
        int numero_actores;

        Extra extras[100];
        int numero_extras;

        Director director;


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
