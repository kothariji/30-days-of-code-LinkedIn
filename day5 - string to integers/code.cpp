
#include <iostream>		//day5of30
#include <string> 		//for stoi()
#include <sstream>      //for stringstream()
using namespace std;
int main(){

  	string str1 = "365 days in a year";
  	int days = stoi(str1);              //extract integer from string
  	cout << "Days: "<<days<<endl;       //output: Days: 365

  	string str2 = "12 month in year";
  	stringstream num(str2);             //creating a object of class stringstream
  	int month = 0;
  	num>>month;
  	cout<<"Month: "<<month<<endl;       //output: Month: 12

  	/************FOR SINGLE DIGIT INTEGER***************/
  	char c = '6';
  	int x = int(c)-48;
  	cout<<"x: "<<x<<endl;               //output: x: 6

  return 0;
}
