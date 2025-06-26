#include <iostream>
#include <string>

using namespace std;

// Prototipos de funciones
void MostrarPantalla(string titulo);
void GuardarEspecialista();
void Regresar();
void MostrarFechaActual();

// Variables globales (simulan campos de formulario)
string nombres, apellidos, fechaNacimiento;
string dni;
string edad;

int main() {
    // Iniciar la aplicación
    MostrarPantalla("REGISTRAR ESPECIALISTA");

    // Mostrar la fecha actual (simulada)
    MostrarFechaActual();

    // Solicitar datos al usuario
    cout << "Nombres: ";
    getline(cin, nombres);

    cout << "Apellidos: ";
    getline(cin, apellidos);

    cout << "Fecha de Nacimiento (dd/mm/aaaa): ";
    getline(cin, fechaNacimiento);

    cout << "DNI: ";
    getline(cin, dni);

    cout << "Edad: ";
    getline(cin, edad);

    // Simular botón "Guardar"
    GuardarEspecialista();

    // Simular botón "Regresar"
    Regresar();

    return 0;
}

void MostrarPantalla(string titulo) {
    cout << "===============================" << endl;
    cout << titulo << endl;
    cout << "===============================" << endl << endl;
}

void GuardarEspecialista() {
    // Validar que todos los campos estén completos
    if (nombres.empty() || apellidos.empty() || fechaNacimiento.empty() || dni.empty() || edad.empty()) {
        cout << "Todos los campos son obligatorios." << endl;
        return;
    }

    // Simulación de almacenamiento en "base de datos"
    cout << "\nGuardando especialista en la base de datos..." << endl;
    cout << "Nombre completo: " << nombres << " " << apellidos << endl;
    cout << "Fecha de Nacimiento: " << fechaNacimiento << endl;
    cout << "DNI: " << dni << endl;
    cout << "Edad: " << edad << endl;

    cout << "Especialista registrado exitosamente." << endl << endl;

    // Limpiar campos
    nombres = apellidos = fechaNacimiento = dni = edad = "";
}

void Regresar() {
    cout << "Regresando a la pantalla anterior..." << endl;
}

void MostrarFechaActual() {
    // Simulación de obtener fecha actual (no usa <ctime> para simplificar)
    string fechaActual = "12/06/2025";
    cout << "Fecha actual: " << fechaActual << endl << endl;
}
