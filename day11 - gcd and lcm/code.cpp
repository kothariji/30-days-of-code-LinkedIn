#include <iostream>		//day11of30
#include <algorithm> 	//for __gcd() function
using namespace std;

int lcm(int a, int b)
{  return (a*b)/__gcd(a, b);  }

int main(){

  int x = 75, y = 20, z = 14;
  /********to find GCD(LCM(x,y), LCM(x,z))*********/
  int X1 = lcm(x,y);
  int X2 = lcm(x,z);
  cout<<__gcd(X1,X2)<<endl;              //output: 150
  /********Faster Approach*********/
  int Y1 = __gcd(y,z);
  int result = lcm(x,Y1);               //output: 150
  cout<<result<<endl;
  return 0;
}
