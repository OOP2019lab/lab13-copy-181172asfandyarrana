// q2_l181172.cpp : Defines the entry point for the console application.

#include"pair.h"

int main () 
{
  Pair <double> myobject (1.012, 1.01234);
	cout<<myobject.getmax()<<endl;
  cout<<myobject.getmin()<<endl;
	cout<<myobject<<endl; // << operator in pairs should be overloaded (inline)
  return 0;
}
