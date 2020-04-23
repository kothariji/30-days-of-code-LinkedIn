
#include <iostream>		//day7of30
using namespace std;

int main()
{
  	int week[] = {1,2,3,4,5,6,7};

  	cout<<week<<endl;		//output: 0x7ca555e019e0

  	char name[] = {'k','o','t','h','a','r','i','j','i'};

  	cout << name << endl;		//output: kothariji
  	cout << &name[0] << endl;	//output: kothariji
  	cout << (int*)&name[0] << endl;		//output: 0x72fd9be4f2c0

  return 0;
}
