#include<iostream>		//day22of30
#include<algorithm>  	//for mismatch() function
#include<vector>
using namespace std;

int main()
{
    vector<int> v1 = { 10, 20, 30, 40, 50};
    vector<int> v2 = { 10, 20, 25, 40, 50};

    pair<vector<int>::iterator, vector<int>::iterator>pairs;

    pairs = mismatch(v1.begin(), v1.end(), v2.begin());

    cout << "The first mismatching elements are: ";
    cout << *pairs.first <<"  "<< *pairs.second <<endl; 	//output: 30  25

  	pairs = mismatch(v1.begin(), v1.end(), v2.begin(), not_equal_to <int>());

    cout << "The first matching elements are: ";
    cout << *pairs.first <<"  "<< *pairs.second <<endl; 	//output: 10  10
   return 0;
}
