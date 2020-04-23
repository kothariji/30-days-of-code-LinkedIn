#include <bits/stdc++.h>		//day9of30
using namespace std;

int main()
{
  	int a[101], mul = 1,modmul=1;
  	const unsigned int M = 1000000007; 	  //mod (10^9+7) declaration
  	for(int i=1;i<101;i++)
      a[i]=i;

    for (int i = 1; i <101; i++){
        mul *= a[i];
      	modmul = (modmul*a[i])%M;         // use of mod in each multiplication
    }
    cout<<"mul = "<<mul<<endl;            //output: modmul = 0
  	cout<<"modmul = "<<modmul<<endl;      //output: modmul = 335890409
  return 0;
}
