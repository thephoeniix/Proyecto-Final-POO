#include<iostream>
#include<cstdlib>

#include "Premio.h"
#include "Pelicula.h"


using namespace std;


void menu()
{
    // MUESTRA LAS OPCIONES DEL PROGRAMA
    cout<<"\n1. Crear pelicula\n";
    cout<<"2. Listar pelicula\n";
    cout<<"3. Crear persona del elenco\n";
    cout<<"4. Listar personas del elenco\n";
    cout<<"5. Asignar persona del elenco a pelicula\n";
    cout<<"6. Otorgar premio\n";
    cout<<"7. Salir\n";

}

Pelicula createPelicula()
{
    string titulo;
    int year;
    int duration;
    int sales;

    cout << "Ingresa un titulo:" << endl;
    cin >> titulo;
    cout << "Ingresa un ano:" << endl;
    cin >> year;
    cout << "Ingresa la duracion de la pelicula:" << endl;
    cin >> duration;
    cout << "Ingresa las ventas de la pelicula" << endl;
    cin >> sales;

    Pelicula p(titulo, year, duration, sales);

    return p;
}


Premio createPremio()
{
    string name;
    string nomination;
    int year;


    cout << "Ingresa nombre: " << endl;
    cin >> name;
    cout << "Ingresa un nominacion:" << endl;
    cin >> nomination;
    cout << "Ingresa ano:" << endl;
    cin >> year;

    Premio prem (name, nomination, year);

    return prem;
}

void listPeliculas(Pelicula peliculas[], int lastStored){
    for(int i = 0; i< lastStored; i++) {
        cout<< "\n Pelicula: " << i << endl;
        cout<< "Titulo: " << peliculas[i].getTitle() << endl;
        cout<< "Ano: " << peliculas[i].getYear() << endl;
    }
}

void listarActores(Actor actores[], int lastStored){
    for(int i = 0; i< lastStored; i++) {
        cout << "Actor no.: " << i << endl;
        actores[i].printDatos();
    }
}

void listarDirectores(Director directores[], int lastStored){
    for(int i = 0; i< lastStored; i++) {
        cout << "Director no.: " << i << endl;
        directores[i].printDatos();
    }
}

void listarExtras(Extra extras[], int lastStored){
    for(int i = 0; i< lastStored; i++) {
        cout << "Extra no.: " << i << endl;
        extras[i].printDatos();
    }
}


int main()
{
    Pelicula peliculas[5];
    Actor actores[50];
    Extra extras[50];
    Director director [50];
    Premio premios[20];

    int lastStored = 0;

    int lastActorRegistered = 0;
    int lastDirectorRegistered = 0;
    int lastExtraRegistered = 0;

    int lastAwardRegistered = 0;

    int option;

    while(option != 7) {
        menu();
        cin >> option;


        switch(option){
            case 1: {
                Pelicula p = createPelicula();
                peliculas[lastStored] = p;
                cout << "Pelicula: " << p.getTitle() << " almacenada en el estante: " << lastStored;
                lastStored++;
                break;
            }

            case 2: {
                listPeliculas(peliculas, lastStored);
                break;

            }

            case 3: {
                int option2;

                cout<<"\n1. Crear actor\n";
                cout<<"2. Crear extra\n";
                cout<<"3. Crear director\n";

                cin >> option2;

                switch(option2) {
                    case 1: {
                        string nombre, personaje;
                        int edad;

                        cout<<"Ingresa Nombre: \n";
                        cin>> nombre;
                        cout<<"2. Ingresa personaje: \n";
                        cin>> personaje;
                        cout<<"3. Ingresa edad: \n";
                        cin>> edad;

                        Actor a (nombre, edad, personaje);

                        actores[lastActorRegistered] = a;
                        cout<< "Actor: " << a.getName() << " creado" << endl;
                        lastActorRegistered++;
                        break;
                    }

                    case 2:{
                        string nombre;
                        int edad, escena;

                        cout<<"Ingresa Nombre: \n";
                        cin>> nombre;
                        cout<<"2. Ingresa escena \n";
                        cin>> escena;
                        cout<<"3. Ingresa edad: \n";
                        cin>> edad;

                        Extra e (nombre, edad, escena);
                        extras[lastExtraRegistered] = e;
                        cout<< "Extra: " << e.getName() << " creado" << endl;
                        lastExtraRegistered++;
                        break;

                    }

                    case 3:{
                        string nombre;
                        int edad, salario;

                        cout<<"Ingresa Nombre: \n";
                        cin>> nombre;
                        cout<<"2. Ingresa salario \n";
                        cin>> salario;
                        cout<<"3. Ingresa edad: \n";
                        cin>> edad;

                        Director d (nombre, edad, salario);
                        director[lastDirectorRegistered] = d;
                        cout<< "Director: " << d.getName() << " creado" << endl;
                        lastDirectorRegistered++;
                        break;
                    }
                }
                break;
            }
            case 4: {
                    int option3;

                    cout << "1. Imprimir datos de actores" << endl;
                    cout << "2. Imprimir datos de directores" <<endl;
                    cout << "3. Imprimir datos de extras" <<endl;

                    cin >> option3;

                    switch(option3) {
                        case 1: {
                            listarActores(actores, lastActorRegistered);
                            break;
                        }
                        case 2:{
                            listarDirectores(director, lastDirectorRegistered);
                            break;
                        }

                        case 3:{
                            listarExtras(extras, lastExtraRegistered);

                            break;
                        }
                    }


                    break;
            }

            case 5: {
                // ASIGNAR PERSONA A PELICULA
                int selectedMovie;
                int selectedPerson;

                cout << "Elige una opcion" << endl;
                cout << "1. Asignar actor a pelicula " << endl;
                cout << "2. Asignar director a pelicula " << endl;
                cout << "3. Asignar extra a pelicula " << endl;

                int option4;

                cin >> option4;


                cout << "\nElige una pelicula por su numero" << endl;
                listPeliculas(peliculas, lastStored);

                cin >> selectedMovie;

                if (selectedMovie > lastStored) { cout << "La pelicula no existe" << endl; break; };

                switch(option4) {
                    case 1: {
                        if(lastActorRegistered == 0) {
                            cout << "\n No existen actores guardados";
                            break;
                        }
                        cout << "\n ELIGE UN ACTOR" << endl;
                        listarActores(actores, lastActorRegistered);

                        cin >> selectedPerson;

                        if (selectedPerson > lastActorRegistered) { cout << "El actor no existe" << endl; break; };


                        peliculas[selectedMovie].asignarActor(actores[selectedPerson]);


                        break;
                    }

                    case 2: {
                        if(lastDirectorRegistered == 0) {
                            cout << "\n No existen directores guardados";
                            break;
                        }

                        cout << "\n ELIGE UN DIRECTOR" << endl;
                        listarDirectores(director, lastDirectorRegistered);

                        cin >> selectedPerson;

                        if (selectedPerson > lastDirectorRegistered) { cout << "El director no existe" << endl; break; };

                        peliculas[selectedMovie].asignarDirector(director[selectedPerson]);

                        break;
                    }

                    case 3: {
                        if(lastExtraRegistered == 0){
                            cout << "\n No existen extras guardados";
                            break;
                        }

                        cout << "\n ELIGE UN EXTRA" << endl;
                        listarExtras(extras, lastExtraRegistered);

                        cin >> selectedPerson;

                        if (selectedPerson > lastExtraRegistered) { cout << "El extra no existe" << endl; break; };

                        peliculas[selectedMovie].asignarExtra(extras[selectedPerson]);


                        break;
                    }

                }
                break;

            }

            case 6: {
                int selectedPerson;
                string name;
                int year;

                cout << "Elige una opcion" << endl;
                cout << "1. Asignar premio a actor " << endl;
                cout << "2. Asignar premio a director " << endl;
                cout << "3. Asignar premio a extra " << endl;

                int option5;

                cin >> option5;


                cout << "Nombre de Premio: " << endl;
                cin >> name;

                cout << "Ano del premio: " << endl;
                cin >> year;



                switch(option5) {
                    case 1: {

                         if(lastActorRegistered == 0) {
                            cout << "\n No existen actores guardados";
                            break;
                        }

                        cout << "\n ELIGE UN ACTOR" << endl;
                        listarActores(actores, lastActorRegistered);

                        cin >> selectedPerson;

                        if (selectedPerson > lastActorRegistered) { cout << "El actor no existe" << endl; break; };
                        actores[selectedPerson].ganarPremio(name, year);
                        actores[selectedPerson].listarPremio();



                        break;

                    }

                    case 2:{
                        if(lastDirectorRegistered == 0) {
                            cout << "\n No existen directores guardados";
                            break;
                        }

                        cout << "\n ELIGE UN DIRECTOR" << endl;
                        listarDirectores(director, lastDirectorRegistered);

                        cin >> selectedPerson;

                        if (selectedPerson > lastDirectorRegistered) { cout << "El director no existe" << endl; break; };
                        director[selectedPerson].ganarPremio(name, year);
                        director[selectedPerson].listarPremio();

                        break;

                    }

                    case 3: {
                        if(lastExtraRegistered == 0){
                            cout << "\n No existen extras guardados";
                            break;
                        }

                        cout << "\n ELIGE UN EXTRA" << endl;
                        listarExtras(extras, lastExtraRegistered);

                        cin >> selectedPerson;

                        if (selectedPerson > lastExtraRegistered) { cout << "El extra no existe" << endl; break; };
                        extras[selectedPerson].ganarPremio();
                        extras[selectedPerson].listarPremio();

                        break;
                    }

            }
            break;

        }
    }
}
    return 0;

}
