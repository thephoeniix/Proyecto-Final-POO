#include <sstream>

using namespace std;

class Persona {
    private:
        string name;
        int age;

    public:
        Persona(): name(""), age(0), numero_premios(0){};
        Persona(string n, int a): name(n), age(a), numero_premios(0){};

        Premio premios[100];
        int numero_premios;



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

        void setNumeroPremios(int num_prem){
            numero_premios=num_prem;
        };

        void ganarPremio (string nominacion, string name, int year) {
            Premio newPremio(name, nominacion, year);
            premios[numero_premios] = newPremio;
            numero_premios++;
        };

        void printDatos() {
            cout<< "\n Persona: " << getName() << endl;
            cout<< "Edad: " << getAge() << endl;
        }
        void listarPremio(){
            for(int i=0; i< numero_premios; i++){
                cout<< "Nombre de Premio: " << premios[i].getName() << endl;
                cout<< "Ano: " << premios[i].getYear() << endl;
                cout<< "Nominacion: " <<premios[i].getNomination() << endl;
            }

        }

};


