#include <iostream> 		//day23of30
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    v1.emplace_back(10);
    v1.emplace_back(20);
    v1.emplace_back(30);
    v1.emplace_back(40);
    v1.emplace_back(50);

    for (auto x : v1)
        cout <<x<<" ";		//output: 10 20 30 40 50
    return 0;
}
