#include <stdio.h>
#include <conio.h>

int main() {
    int num1, num2, num3;

    // Solicitar al usuario que ingrese los números
    printf("Ingrese el primer número (mayor de 3 y menor de 15): ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número (mayor de 3 y menor de 15): ");
    scanf("%d", &num2);
    printf("Ingrese el tercer número (mayor de 3 y menor de 15): ");
    scanf("%d", &num3);

    // Verificar que los números estén dentro del rango
    if (num1 <= 3 || num1 >= 15 || num2 <= 3 || num2 >= 15 || num3 <= 3 || num3 >= 15) {
        printf("Error: Los números deben ser mayores de 3 y menores de 15.\n");
        return 1;
    }

    // Ordenar los números de mayor a menor
    int temp;
    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 < num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    
    printf("Números ordenados de mayor a menor: %d, %d, %d\n", num1, num2, num3);

    printf("Presione cualquier tecla para salir...\n");
    getch();

    return 0;
}
