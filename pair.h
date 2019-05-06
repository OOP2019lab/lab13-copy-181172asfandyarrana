#pragma once
#include <iostream>
using namespace std;

template <typename T> 


class Pair
{
	T temp[2];
public:
	Pair(T x, T y)
	{
		temp[0]=x;
		temp[1]=y;

	}

	T getmax();
	T getmin();
	friend ostream& operator << (ostream& out, const Pair& p)
	{
		out<<p.temp[0]<<endl<<p.temp[1]<<endl;

		return out;
	}
};

template <typename t>
t Pair<t>::getmin()
{
	if(temp[0]<temp[1])
		return temp[0];
	else 
		return temp[1];


}
template <typename t>
t Pair<t>::getmax()
{
	if(temp[0]>temp[1])
		return temp[0];
	else 
		return temp[1];


}


