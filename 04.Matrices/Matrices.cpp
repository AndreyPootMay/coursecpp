/*
 * Matrices.cpp
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
#define SIZE 100
using namespace std;

int main(int argc, char **argv)
{
	int m[SIZE][SIZE], column=0, row=0, index_row=0, index_column=0;
	cout<<"Ingresa el número de las columnas"<<endl;
	cin>>column;
	cout<<"Ingrese el número de las filas"<<endl;
	cin>>row;
	
	for(index_row = 0;index_row < row; index_row++) {
		for (index_column = 0; index_column < column; index_column++) {
			cout<<"Escribe las calificaciones para ["<<index_row+1<<"]"<<"["<<index_column+1<<"]"<<endl;
			cin>>m[index_row][index_column];
		}
	}
	
	cout<<"\n\tLas calificaciones almacenadas en la matriz son: "<<endl;
	cout<<"\n\n";
	for(index_row = 0;index_row < row; index_row++) {
		cout<<"\n\t";
		for (index_column = 0; index_column < column; index_column++) {
			cout<<m[index_row][index_column]<<" ";
		}
	}
	
	getchar();
	return 0;
}
