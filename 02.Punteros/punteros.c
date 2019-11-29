#include<stdio.h>

int main()
{
	int num_cuenta;
	int *p;
	p=&num_cuenta;
	printf("Introduce tu numero de cuenta:\n");
	scanf("%i", &num_cuenta);
	printf("Direccion en memoria de la variable num_cuenta: %p\n, contenido de la variable %i\n",p, num_cuenta);
	getchar();
}
