#include <stdio.h>

int
main ()
{
  int n, i, resultado;

  printf ("Ingresa un numero entero positivo diferente de cero: ");
  scanf ("%d", &n);

  printf ("Salida = ");
  for (i = 1; i <= n; i++)
	{
	  resultado = (i * (i + 1) * (2 * i + 1)) / 6;
	  printf ("%d", resultado);
	  if (i != n)
		{
		  printf (", ");
		}
	}
  printf ("\n");

  return 0;
}
