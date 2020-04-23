#include <bits/stdc++.h>		//day8of30
using namespace std;

int main()
{
  	vector <int> v1 {10, 20, 30, 40, 50, 60, 70, 80, 90};

    int num_of_rot = 4;            //number of rotations

  	rotate(v1.begin(), v1.begin() + num_of_rot, v1.end());      //left rotation

  	for(int i=0; i<v1.size();i++)
        cout<<" "<<v1[i];           //output: 50 60 70 80 90 10 20 30 40

    rotate(v1.begin(), v1.begin() + v1.size() - num_of_rot, v1.end());      //right rotation

  	for(int i=0; i<v1.size();i++)
        cout<<" "<<v1[i];           //output: 10 20 30 40 50 60 70 80 90
  return 0;
}
