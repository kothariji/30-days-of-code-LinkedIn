#include <iostream>
using namespace std;

int main()
{
    int num1 = 43;
  	int num2 = 44;

    !(num1 & 1) ? cout << "Even" : cout << "Odd";       //output: Odd
  	!(num2 & 1) ? cout << "Even" : cout << "Odd";       //output: Even

 	num1 <<= 1;         //multipying by 2
  	num2 >>= 1;         //divide by 2

  cout<<"num1"<<num1<<endl;     //output: 86
  cout<<"num2"<<num2<<endl;     //output: 22
  return 0;

}
