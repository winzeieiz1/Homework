#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name ;
	float salary ;
	float sale ;
	float persent ;
	float total;

	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Salary : ";
	cin>>salary;
	cout<<"Enter Sale : ";
	cin>>sale;
	cout<<"Enter Commission Percent : ";
	cin>>persent;


	total =salary+sale*(persent/100);
	cout<<"Your Name = "<<name<<endl;
	cout<<"Total Revenue = "<<total<<endl;



	return 0;
}
