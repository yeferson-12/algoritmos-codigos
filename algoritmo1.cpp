#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaración de variables
    string nombres, apellidos, fechaNacimiento, opcion;
    int dni, edad;

    // Mostrar interfaz
    cout << "REGISTRAR ESTUDIANTE" << endl << endl;

    cout << "Nombres: ";
    getline(cin, nombres);

    cout << "Apellidos: ";
    getline(cin, apellidos);

    cout << "Fecha de Nacimiento (dd/mm/aaaa): ";
    getline(cin, fechaNacimiento);

    cout << "DNI: ";
    cin >> dni;

    cout << "Edad: ";
    cin >> edad;

    cin.ignore(); // Limpiar buffer antes de usar getline nuevamente

    // Mostrar la información registrada
    cout << endl << "Información del Estudiante" << endl;
    cout << "Nombres: " << nombres << endl;
    cout << "Apellidos: " << apellidos << endl;
    cout << "Fecha de Nacimiento: " << fechaNacimiento << endl;
    cout << "DNI: " << dni << endl;
    cout << "Edad: " << edad << endl << endl;

    // Simulación del botón Guardar
    cout << "¿Desea guardar la información? (si/no): ";
    getline(cin, opcion);

    if (opcion == "si" || opcion == "SI" || opcion == "Si") {
        cout << "Información guardada exitosamente." << endl;
    } else {
        cout << "Operación cancelada." << endl;
    }

    // Regresar al menú
    cout << "Regresando al menú..." << endl;

    return 0;
}
