/*
 * 06-busqueda-binaria.cpp
 * 
 * Copyright 2019 andrey <andrey@andrey-HP-Notebook>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <stdio.h>
#define dimension 5
using namespace std;

int main(int argc, char **argv)
{
	int index,j;
	int value;
	int pos_minus,top,center,down;
	float minus,aux;
	float array[dimension];
	
	/**
	 * Lee el vector
	 */
	for(index=0;index<dimension;index++) {
		cout<<"Arreglo["<<index<<"]="<<endl;
		cin>>array[index];
	}
	 
	 /**
	  * Ordenar por selección
	  */
	for (index=0;index<dimension;index++) {
		minus=array[index];
		pos_minus=index;
		for (j=index+1;j<dimension;j++) {
			if (minus>array[j]) {
				minus=array[j];
				pos_minus=j;
			}
		}
		aux=array[index];
		array[index]=array[pos_minus];
		array[pos_minus]=aux;
	}
	 
	 /*Imprime el vector*/
	for (index=0;index<dimension;index++) {
		cout<<"Arreglo["<<index<<"]="<<array[index]<<endl;
	 }
	cout<<"Qué valor desea buscar? "<<endl;
	cin>>value;
	down=0;
	top=dimension-1;
	
	center=(top+down)/2;
	/*Búsqueda binaria*/
	while(down<=top && array[center] != value)
	{
		if (value<array[center]) {
			down=center+1;
		} else {
			center=(top+down)/2;
		}
	}
	
	if(value==array[center]) {
		cout<<"El valor se encuentra en la posición: "<<center;
	} else {
		cout<<"El valor no se encuentra";
	}
	
	getchar();
	return 0;
}

