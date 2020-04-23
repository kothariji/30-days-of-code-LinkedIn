
#include <iostream> 		//day17of30
#include <algorithm>		//transform()
#include <functional>		//plus , minus, multiplies, divides
using namespace std;

int main()
{
  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[5] = {5, 4, 3, 2, 1};
  int add[5], sub[5], mul[5], div[5];

  transform(arr1, arr1+5, arr2, add, plus<int>());
  transform(arr1, arr1+5, arr2, sub, minus<int>());
  transform(arr1, arr1+5, arr2, mul, multiplies<int>());
  transform(arr1, arr1+5, arr2, div, divides<int>());

  for (int i=0; i<5; i++)
    cout << add[i] << " ";              //output: 6 6 6 6 6

  for (int i=0; i<5; i++)
    cout << sub[i] << " ";              //output: -4 -2 0 2 4

  for (int i=0; i<5; i++)
    cout << mul[i] << " ";              //output: 5 8 9 8 5

  for (int i=0; i<5; i++)
    cout << div[i] << " ";              //output: 0 0 1 2 5
}
