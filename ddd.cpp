#include <iostream>
using namespace std;
int main()
{
	float first,second,third,mid,final;

	cout<<"Enter First quizz (10) :";
	cin>>first;

	cout<<"Enter second quizz (10) :";
	cin>>second;

	cout<<"Enter third quizz (10) :";
	cin>>third;
	cout<<endl;
	cout<<"Enter mid-term (40) :";
	cin>>mid;
	cout<<endl;
	cout<<"Enter final (50) :";
	cin>>final;

	float Quizz = (first+second+third)/3;
	cout<<"Quizz Total "<<Quizz;
	cout<<endl;
	cout<<"Mid term :"<<mid;
	cout<<endl;
	cout<<"Final:" <<final;
	cout<<endl;
	float total (mid+final+Quizz);
	cout<<"Total : " <<total;
	cout<<endl;
	cout<<"Your score isPASS";

	
	cout<<endl;

	return(0);
}