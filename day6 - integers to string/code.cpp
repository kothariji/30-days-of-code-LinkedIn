#include <iostream>		//day6of30
#include <string> 		//for to_string()
#include <sstream>      //for ostringstream()
using namespace std;
int main(){

  	int days = 365;
  	string str1 = to_string(days);              //extract integer from string
  	cout << "Days: "<<days<<endl;       //output: Days: 365

  	int month = 12;
  	ostringstream obj;             //creating a object of class ostringstream
  	obj << month;
  	string str2 = obj.str();
  	cout<<"Month: "<<str2<<endl;       //output: Month: 12

  	/************FOR SINGLE DIGIT INTEGER***************/
  	int x = 6;
  	char c = char(x+48);
  	cout<<"c: "<<c<<endl;               //output: c: 6

  return 0;
}
