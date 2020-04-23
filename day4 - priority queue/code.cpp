#include <iostream>		//day4of30
#include <queue>
using namespace std;
int main(){
  	priority_queue <int> pqueue;	//priority queue initialisation
    pqueue.push(7);
    pqueue.push(24); 		//inserting value in queue
    pqueue.push(16);
    pqueue.push(85);

    cout << "Top element: "<<pqueue.top()<<endl;   //output: Top element: 85
    pqueue.pop(); 					//remove the top most element

    cout << "The priority pqqueue is: ";
    while (!pqueue.empty()){
        cout <<pqueue.top()<<" ";         //output: 24 16 7
        pqueue.pop();
    }
  return 0;
}
