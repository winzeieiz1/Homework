#include<iostream>
using namespace std;
void display(int s[],int n);
int cal_bonus(int salary);
int main()
{
	
	int person;

	cout<<"Enter Number of peerson : ";
	cin>>person;
	int *salary = new int [person];
	for(int i=0;i<person;i++)
	{
		cout<<"Enter the salary "<<i+1<<" : ";
		cin>>salary[i];
	}
	display(salary,person);
	return 0;
}
void display(int s[],int n)
{
	cout <<"There are "<<n<<" persons."<<endl;
	for(int i = 0;i < n;i++)
	{
		int Bonus = cal_bonus(s[i]);
		cout<<"The Salary for person "<<i+1<<" = "<<s[i]<<" and Bonus = "<<Bonus<<endl;
	}

}
int cal_bonus(int salary)
{
	return salary *2;
}

