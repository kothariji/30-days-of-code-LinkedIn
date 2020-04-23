#include<iostream> 		//day21of30
#include<algorithm> // for any_of(), all_of, none_of
using namespace std;
int main()
{
    int a[8] =  {6, 4, 9, 2, 1, 0, 7, 100};

  any_of(a, a+8, [](int x){ return x<0; })? //checking if any element is less than 0
          cout << "There exists a negative element" :
          cout << "All are positive elements";		//output: All are positive

  all_of(a, a+8, [](int x){ return x%2==0; })? 	//checking if all elements are even
          cout << "All are even number" :
          cout << "Odd numbers are present";	//output: odd numbers are present

  none_of(a, a+8, [](int x){ return x>100; })? //checking if any element is greater than 100
          cout << "All elements are less than or equal to 100" :
          cout << "elements greater than 100 are present";	//output: all elements are smaller

    return 0;

}
