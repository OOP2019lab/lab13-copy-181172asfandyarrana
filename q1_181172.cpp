// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include"Header.h"
#include <iostream>
using namespace std;


void main()
{
	//Task 1
	/*int i=5, j=6, k;
	long l=10, m=5, n;

	k=GetMax<int>(i,j);
	n=GetMin<long>(l,m);

	cout<<k<<endl<<n<<endl;*/

	//Task 2
	char i='Z';
	int j=6, k;
	long l=10, m=5, n;
	k=GetMax<int, long>(i,m);
	n=GetMin<int, char>(j,l);
	cout<<k<<endl<<n<<endl;
}

