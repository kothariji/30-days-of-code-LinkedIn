#include <iostream>		//day13of30
#include<numeric> // for iota()
using namespace std;

int main()
{
    int a[5] = {0};
    char c[5] = {0};

    iota(a, a+5, 10);
    iota(c, c+5, 'a');
    for(int i=0;i<5;i++)
   		cout<<a[i]<<" ";		//output: 10, 11, 12, 13, 14

    for(int i=0;i<5;i++)
        cout<<c[i]<<" ";		//output: a b c d e
   return 0;
}
