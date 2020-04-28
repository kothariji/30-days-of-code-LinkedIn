#include<iostream> 		//day28of30
#include <regex>		//for regex functions
using namespace std;
int main()
{
     string a = "dhruv@linkedin.com";
  	 string b = "sadss.as@a.ask@ksd.cdsf";

    regex email("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    regex_match(a, email) ? cout<<"Valid" : cout<<"Not Valid";
  	regex_match(b, email) ? cout<<"Valid" : cout<<"Not Valid";
    				//output: Valid
  					//output: Not Valid
    return 0;
}
