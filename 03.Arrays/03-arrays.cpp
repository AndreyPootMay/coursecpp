/*
 * 03-arrays.cpp
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
using namespace std;

int main(int argc, char **argv)
{
	int array[4]; int size=0, pos=0, number=0;
	cout<<"Introduce el número del arreglo: "<<endl;
	cin>>size;
	
	for (int index=0;index<=size-1;index++) {
		cout<<"Introduce el valor númerico "<<index<<" para el arreglo: "<<endl;
		cin>>array[index];
	}
	
	cout<<"En que posición quieres insertar el número?"<<endl;
	cin>>pos;
	
	cout<<"Introduce el número"<<endl;
	cin>>number;
	
	/**
	 * Añado el valor de number en la posición del array que referencíe
	 * la variable pos.
	 * @param int index
	 * @return void
	 */
	for (int index=size;index>=pos+1;index--) {
		array[index] = array[index-1];
		array[pos] = number;
	}
	
	for (int index = 0; index <= size; index++) {
		cout<<array[index]<<endl;
	}
	
	getchar();
}
