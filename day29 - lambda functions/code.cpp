#include <bits/stdc++.h>		//day290f30
using namespace std;

int main()
{


    auto add = [](auto a, auto b) {
        return a + b;
    };

  	cout << add(10, 20) << endl;        //output: 30

  	cout << add(1.3, 2.6) << endl;      //output: 3.9

    cout << add(string("Dhruv"), string(" Kothari")) << endl;
                                        //output:Dhruv Kothari
    return 0;
}
