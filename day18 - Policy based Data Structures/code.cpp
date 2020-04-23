#include <ext/pb_ds/assoc_container.hpp>
#include <iostream>			//day18of30
using namespace __gnu_pbds;
using namespace std;

typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	indexed_set s; //Index Set to access elements by index in set
	s.insert(2);
	s.insert(7);
	//returns iterator to given position
	auto x = s.find_by_order(1);
	cout << *x << endl;						//output: 7
	//returns position to given element
	cout << s.order_of_key(7) << endl;		//output: 1
	//if element does not appear in set, we get position that element would have in set
	cout << s.order_of_key(1) << endl;		//output: 0
	return 0;
}
