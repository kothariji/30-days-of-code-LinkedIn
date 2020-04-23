#include <bits/stdc++.h>		//day3of30
using namespace std;
int main(){

  char cap = 'C' , small = 's';

  cout<<cap<<" "<<small<<endl;   //output:- C s

  cap = cap | ' ';  			//Manupulating 5th bit and making it 1;
  small = small & '_';			//Manupulating 5th bit and making it 0;

  cout<<cap<<" "<<small<<endl;	 //output:- c S
  return 0;
}
