#include <stdio.h>
#include <conio.h>

int main() {
    int n, i, suma = 0;

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    // Validar que n sea un entero positivo
    if (n <= 0) {
        printf("El numero ingresado no es valido. Debe ser un entero positivo.\n");
        return 1;
    }

    // Calcular la suma de los primeros n numeros pares
    for (i = 1; i <= n; i++) {
        suma += 2 * i;
        printf("Para n = %d, Suma = %d.\n", i, suma);
    }

    printf("Presione cualquier tecla para salir...\n");
    getch();

    return 0;
}
