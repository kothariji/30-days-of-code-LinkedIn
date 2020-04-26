#include <iostream> 		//day26of30
#include <set>				//for set STL
using namespace std;

int main()
{
	multiset <int> ms;
	ms.insert(5);
	ms.insert(5);
  	ms.insert(2);
	ms.insert(4);
	ms.insert(4);
  	ms.insert(3);
	ms.insert(6);

  	for (auto x : ms)
		cout << x << " ";		//output: 2 3 4 4 5 5 6

	if(ms.find(4) != ms.end())
    	ms.erase(4);			//all the instances of 4 are deleted
    else
      cout<<"Element not found!";

  	for (auto x : ms)
		cout << x << " ";     	//output: 2 3 5 5 6
  return 0;
}
