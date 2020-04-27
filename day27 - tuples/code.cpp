#include<iostream> 		//day27of30
#include<tuple> // for tuple
using namespace std;
int main()
{
    tuple <string, int, float> person;
  	person = make_tuple("kothariji", 20, 5.8);

    cout<<get<0>(person)<<" "<< get<1>(person)<<" "<< get<2>(person);
  	                                //output: kothariji 20 5.8
  	cout << tuple_size<decltype(person)>::value << endl;
                                    //output: 3
  	string name;
  	int age;
  	float height;
  	tie(name, age, height) = person;

    cout<<name<<" "<<age<<" "<<height;
    return 0;               //output: kothariji 20 5.8
}
