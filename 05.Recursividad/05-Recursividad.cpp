/*
 * recursividad.cpp
 * 
 * Copyright 2019 andrey <andrey@andrey-HP-Notebook>
 */
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char **argv)
{
	int number, counter, factorial = 1;
	cout<<"Introduzca un número para calcular el factorial: "<<endl;
	cin>>number;
	
	for(counter=number;counter>=1;counter--) {
		factorial = factorial*counter;
	}
	cout<<"El factorial de "<<number<<" es: "<<factorial;
	getchar();
	return 0;
}

