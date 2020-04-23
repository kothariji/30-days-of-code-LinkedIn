#include <iostream>		//day12of30
#include<cmath>		    //for floor() and log10()
using namespace std;

int digitcount(long long int x)
{  return floor(log10(x) + 1); }

int main()
{
    long long int a = 426871395;

  	cout<<"Number of digits : "<<digitcount(a);         //output: Number of digits : 9
  	return 0;
}
