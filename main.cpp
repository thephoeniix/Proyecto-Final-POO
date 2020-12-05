#include<iostream>
#include<cstdlib>

//Biblotecas
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
//Se crea un objeto llamando a los metodos de Pelicula para poder rellenar los datos 
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

//Se crea un objeto llamando a los metodos de Premio para poder rellenar los datos 
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

//Imprime lista de las Peliculas, ACtores, Directores y Extras.
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
    //Arreglos 
    Pelicula peliculas[5];
    Actor actores[50];
    Extra extras[50];
    Director director [50];
    Premio premios[20];
    //Se crean varibles que inician en 0
    int lastStored = 0;
    int lastActorRegistered = 0;
    int lastDirectorRegistered = 0;
    int lastExtraRegistered = 0;
    int lastAwardRegistered = 0;

    int option;
    //Se crea un ciclo que siga corriendo mientras no elija la opción salir.
    while(option != 7) {
        menu(); //Imprime menu
        cin >> option; //ingresa la opción 
        
        //Switch donde dependiendo la elección efectua un diferente procedimiento 
        switch(option){
            case 1: { //Crea una nueva pelicula e imprime nombre y donde esta almacenada
                Pelicula p = createPelicula();
                peliculas[lastStored] = p;
                cout << "Pelicula: " << p.getTitle() << " almacenada en el estante: " << lastStored;
                lastStored++;
                break;
            }

            case 2: { //Lista las peliculas creadas
                listPeliculas(peliculas, lastStored);
                break;

            }

            case 3: { //creas actores, estras y directores
                int option2;
                //Imprime un menu
                cout<<"\n1. Crear actor\n";
                cout<<"2. Crear extra\n";
                cout<<"3. Crear director\n";
                //Elige una opción
                cin >> option2;
                //Switch donde dependiendo la elección efectua un diferente procedimiento
                switch(option2) {
                    case 1: { //Se crea Actor 
                        string nombre, personaje;
                        int edad;

                        cout<<"Ingresa Nombre: \n";
                        cin>> nombre;
                        cout<<"2. Ingresa personaje: \n";
                        cin>> personaje;
                        cout<<"3. Ingresa edad: \n";
                        cin>> edad;
                    
                        Actor a (nombre, edad, personaje);
                        //Se guarda un nuevo actor y se muestra el nombre y el numero del espacio en el arreglo que fue creada
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
                        //Crea un director 
                        string nombre;
                        int edad, salario;

                        cout<<"Ingresa Nombre: \n";
                        cin>> nombre;
                        cout<<"2. Ingresa salario \n";
                        cin>> salario;
                        cout<<"3. Ingresa edad: \n";
                        cin>> edad;
                        //Guarda director e imprime nombre y num. del arreglo donde fue creado
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
                    //Imprime las listas de actores, directores y extras ya creados previamente
                    int option3;
                    //Imprime un menu que te pregunta que buscas imprimir
                    cout << "1. Imprimir datos de actores" << endl;
                    cout << "2. Imprimir datos de directores" <<endl;
                    cout << "3. Imprimir datos de extras" <<endl;

                    cin >> option3;
                    //Switch donde dependiendo la elección efectua un diferente procedimiento
                    switch(option3) {
                        case 1: { //Imprime Actores guardados
                            listarActores(actores, lastActorRegistered);
                            break;
                        }
                        case 2:{ //Imprime Directores guardados
                            listarDirectores(director, lastDirectorRegistered);
                            break;
                        }

                        case 3:{ //Imprime Extras guardados
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
                //Se imprime un menu que te pide que selecciones que opción que quieres hacer
                cout << "Elige una opcion" << endl;
                cout << "1. Asignar actor a pelicula " << endl;
                cout << "2. Asignar director a pelicula " << endl;
                cout << "3. Asignar extra a pelicula " << endl;

                int option4;
                //se ingresa la opción
                cin >> option4;

                //Se pide que eligas la pelicula con el num que se guardo la pelicula
                cout << "\nElige una pelicula por su numero" << endl;
                listPeliculas(peliculas, lastStored);
                //Se ingresa el numero de pelicula
                cin >> selectedMovie;
                //Si el numero que se selecciono es mayor, la pelicula no existe
                if (selectedMovie > lastStored) { cout << "La pelicula no existe" << endl; break; };
               
                switch(option4) { //Switch donde dependiendo la elección efectua un diferente procedimiento
                    case 1: { //Asigna Actor a Pelicula 
                        if(lastActorRegistered == 0) {
                            cout << "\n No existen actores guardados";
                            break;
                        }
                        cout << "\n ELIGE UN ACTOR" << endl;
                        listarActores(actores, lastActorRegistered);
                        //Selecciona un actor 
                        cin >> selectedPerson;

                        if (selectedPerson > lastActorRegistered) { cout << "El actor no existe" << endl; break; };

                            
                        //el objeto de peliculas del numero de arreglo se asigna al numero del objeto actor
                        peliculas[selectedMovie].asignarActor(actores[selectedPerson]);


                        break;
                    }

                    case 2: {//Asigna Director a Pelicula
                        if(lastDirectorRegistered == 0) {
                            cout << "\n No existen directores guardados";
                            break;
                        }

                        cout << "\n ELIGE UN DIRECTOR" << endl;
                        listarDirectores(director, lastDirectorRegistered);
                        //Selecciona un director
                        cin >> selectedPerson;

                        if (selectedPerson > lastDirectorRegistered) { cout << "El director no existe" << endl; break; };
                        //el objeto de peliculas del numero de arreglo se asigna al numero del objeto director

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
                        //Selecciona un extra

                        cin >> selectedPerson;

                        if (selectedPerson > lastExtraRegistered) { cout << "El extra no existe" << endl; break; };
                        //el objeto de peliculas del numero de arreglo se asigna al numero del objeto extra

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
                //se imprime un menu
                cout << "Elige una opcion" << endl;
                cout << "1. Asignar premio a actor " << endl;
                cout << "2. Asignar premio a director " << endl;
                cout << "3. Asignar premio a extra " << endl;
        
                int option5;
                //Se elige la opción
                cin >> option5;

                //Se crea e ingresa un premio
                cout << "Nombre de Premio: " << endl;
                cin >> name; //Nombre de premio

                cout << "Ano del premio: " << endl;
                cin >> year; //Año del premio


                //Switch donde dependiendo la elección efectua un diferente procedimiento
                switch(option5) {
                    case 1: {

                         if(lastActorRegistered == 0) {
                            cout << "\n No existen actores guardados";
                            break;
                        }
                         //Selecciona el numero del actor 
                        cout << "\n ELIGE UN ACTOR" << endl;
                        listarActores(actores, lastActorRegistered);

                        cin >> selectedPerson;

                        if (selectedPerson > lastActorRegistered) { cout << "El actor no existe" << endl; break; };
                        //el objeto actores del numero de arreglo seleccionado gana premio 
                        actores[selectedPerson].ganarPremio(name, year);
                        //el objeto actores del numero de arreglo se le aplica la metodo de listar premio
                        actores[selectedPerson].listarPremio();



                        break;

                    }

                    case 2:{
                        if(lastDirectorRegistered == 0) {
                            cout << "\n No existen directores guardados";
                            break;
                        }
                         //Selecciona el numero del director 

                        cout << "\n ELIGE UN DIRECTOR" << endl;
                        listarDirectores(director, lastDirectorRegistered);

                        cin >> selectedPerson;

                        if (selectedPerson > lastDirectorRegistered) { cout << "El director no existe" << endl; break; };
                        //el objeto director del numero de arreglo seleccionado gana premio 
                        director[selectedPerson].ganarPremio(name, year);
                        //el objeto director del numero de arreglo se le aplica la metodo de listar premio
                        director[selectedPerson].listarPremio();

                        break;

                    }

                    case 3: {
                        if(lastExtraRegistered == 0){
                            cout << "\n No existen extras guardados";
                            break;
                        }
                         //Selecciona el numero del director 
                        cout << "\n ELIGE UN EXTRA" << endl;
                        listarExtras(extras, lastExtraRegistered);

                        cin >> selectedPerson;

                        if (selectedPerson > lastExtraRegistered) { cout << "El extra no existe" << endl; break; };
                        //el objeto director del numero de arreglo seleccionado gana premio 
                        extras[selectedPerson].ganarPremio();
                        //el objeto extra del numero de arreglo se le aplica la metodo de listar premio
                        extras[selectedPerson].listarPremio();

                        break;
                    }

            }
            break;

        }
    }
}
    return 0;

};
