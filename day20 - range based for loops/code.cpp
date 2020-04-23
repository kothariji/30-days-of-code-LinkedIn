#include <bits/stdc++.h> 			//day20of30
#include <boost/range/adaptor/reversed.hpp>		//for reversing range based loop
using namespace std;

int main()
{
    string s = "kotharji"; 				//data types will be declared at runtime
    int y[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i = 1;
    vector <int> v1{1, 2, 3, 4, 5, 6, 7, 8};

  for(auto x: s)
  	cout << x << " ";               //output: k o t h a r i j i
  for(auto x: y)
  	cout << x << " ";               //output: 1 2 3 4 5 6 7 8
  for (auto x : boost::adaptors::reverse(v1))
    cout << x << " ";             //output: 8 7 6 5 4 3 2 1
  return 0;
}
