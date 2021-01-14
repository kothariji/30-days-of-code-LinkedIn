#include <bits/stdc++.h>    //day15of30
using namespace std;

int main(){
    
    int a[8] = {1, 7, 8, 9, 3, 5, 4, 2};
    sort(a, a+8);
    
    if(binary_search(a, a+8, 2))
        cout<<"Found";
    else
        cout<<"Not Found";      //output: Found
        
    if(binary_search(a, a+8, 6))
        cout<<"Found";
    else
        cout<<"Not Found";      //output: Not Found
    
}   
