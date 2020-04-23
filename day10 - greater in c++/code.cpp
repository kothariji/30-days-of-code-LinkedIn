#include <iostream>			//day10of30
#include <functional>		// std::greater
#include <algorithm>		// std::sort
using namespace std;

int main () {

  	int arr[]={60,10,80,40,30,20,50,90,70};
	sort (arr, arr+9, greater<int>());

  	for (int i=0; i<9; i++)
    	cout<< arr[i] <<" ";	//output: 90 80 70 60 50 40 30 20 10

   return 0;
}
