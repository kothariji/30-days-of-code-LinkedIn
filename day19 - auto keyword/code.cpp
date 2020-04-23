#include <bits/stdc++.h> 			//day19of30
using namespace std;

int main()
{
    auto x = 'd'; 				//data types will be declared at runtime
    auto y = 24;
    auto z = 83.6667;
  	auto b = true;

  cout << typeid(x).name() << endl;			//output: c
  cout << typeid(y).name() << endl;			//output: i
  cout << typeid(z).name() << endl;			//output: d
  cout << typeid(b).name() << endl;         //output: b

    return 0;
}
