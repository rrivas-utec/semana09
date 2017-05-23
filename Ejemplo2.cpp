#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CAlumno
{
    private:
        string nombre;
        string apellido;
        int edad;
        string id;
    public:
        // Constructor con parametros
        CAlumno (string pnombre, string papellido, int pedad, string pid)
        {
            nombre = pnombre;
            apellido = papellido;
            edad = pedad;
            id = pid;
        }
        
        // Constructor sin parametros
        CAlumno()
        {
            nombre = "";
            apellido = "";
            edad = 0;
            id = "";
        }
        
        // Destructor
        ~CAlumno()
        {
            edad = 0;
        }
        
        // Metodos de Acceso
        string getNombre() { return nombre; }
        string getApellido() { return apellido;}
        int getEdad() { return edad; }
        string getId() { return id; }
        
        // Metodos de Modificacion
        void setNombre(string value) { nombre = value;}
        void setApellido(string value) { apellido = value;}
        void setEdad(int value) { edad = value;}
        void setId(string value) { id = value;}
};

int main()
{
    CAlumno pepito("Pepe", "Quevedo", 65, "2");
    
    /*
    CAlumno pepito;
    pepito.setNombre("Pepe");
    pepito.setApellido("Quevedo");
    pepito.setEdad(65);
    pepito.setId("2");
    */
    
    cout << pepito.getNombre() << " " << pepito.getApellido() << endl;
    
    return 0;
}