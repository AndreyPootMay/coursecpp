/*
 * Sumando.cpp
 * 
 * Copyright 2019 andrey <andrey@cicontrol> 
 */


#include <bits/stdc++.h>
using namespace std;

int n, mat[1002][1002], addition=0;
int i, j;
	
int main()
{
	cin>>n;
	for (i=1;i<=n;i++) 
		for (j=1; j<=n; j++) 
			cin>>mat[i][j];
	
	for (i=1;i<=n;i++)
	{
		addition=0;
		for (j=1;j<=n;j++) 
			addition=addition+mat[j][i];
		cout<<addition<<" ";
	}
	
	return 0;
}

