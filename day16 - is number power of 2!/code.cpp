#include <bits/stdc++.h>		//day16of30
using namespace std;

bool check(int x) {
  if((x & (x-1))==0)
  	return true;
  return false;
}

int main(){

  cout<<check(32)<<"\n";		//output: 1
  cout<<check(45)<<"\n";		//output: 0
  cout<<check(128)<<"\n";		//output: 1
  cout<<check(78)<<"\n";		//output: 0
  return 0;
}
