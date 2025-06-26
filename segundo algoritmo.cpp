#include <stdio.h>
#include <string.h>

int main() {
    char nombres[100];
    char apellidos[100];
    char fechaNacimiento[20];
    int dni;
    int edad;
    char opcion[10];

    printf("REGISTRAR ESTUDIANTE\n");
    printf("-----------------------\n");

    printf("Nombres: ");
    fgets(nombres, sizeof(nombres), stdin);
    // Quitar el salto de línea que fgets captura
    nombres[strcspn(nombres, "\n")] = 0;

    printf("Apellidos: ");
    fgets(apellidos, sizeof(apellidos), stdin);
    apellidos[strcspn(apellidos, "\n")] = 0;

    printf("Fecha de Nacimiento (dd/mm/aaaa): ");
    fgets(fechaNacimiento, sizeof(fechaNacimiento), stdin);
    fechaNacimiento[strcspn(fechaNacimiento, "\n")] = 0;

    printf("DNI: ");
    scanf("%d", &dni);

    printf("Edad: ");
    scanf("%d", &edad);

    // Limpiar buffer antes de leer opcion
    getchar();

    printf("-----------------------\n");
    printf("Información del Estudiante\n");
    printf("Nombres: %s\n", nombres);
    printf("Apellidos: %s\n", apellidos);
    printf("Fecha de Nacimiento: %s\n", fechaNacimiento);
    printf("DNI: %d\n", dni);
    printf("Edad: %d\n", edad);
    printf("-----------------------\n");

    printf("¿Desea guardar la información? (si/no): ");
    fgets(opcion, sizeof(opcion), stdin);
    opcion[strcspn(opcion, "\n")] = 0;

    if (strcmp(opcion, "si") == 0) {
        printf("Información guardada exitosamente.\n");
    } else {
        printf("Operación cancelada.\n");
    }

    printf("Regresando al menú...\n");

    return 0;
}


