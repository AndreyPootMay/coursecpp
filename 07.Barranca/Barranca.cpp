/*
 * Barrancas.cpp
 * Copyright 2019 andrey <andrey@ci-control>
 * 
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Desactivo la sincronización con los standar streams de c/c++
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// Inicializo variables y pido el input
	int n,k,r=-50010,i,g=0;
	cin>>n>>k;
	int v[n];
	// TODO: Evaluar encapsulación de la operación cuadrática.
	for (int i = 0;i<n; i++) {
		cin>>v[i];
		if (i > 0 && i < k) {
			g += (v[i] - v[i-1]);
		}
	}
	
	if (g>r) {
		r=g;
	}
	
	g-=(v[1]-v[0]);
	
	for (i=1;i<(n-k);i++,g-=(v[i]-v[i-1])) {
		g+=(v[i+k-1] - v[i+k-2]);
		
		if (g>r) {
			r=g;
		}
	}
	cout<<r<<endl;
	return 0;
}

