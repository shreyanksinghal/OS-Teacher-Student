#include<iostream>
#include<conio.h>
using namespace std;
struct Student
{
	bool  pen;
	bool  paper;
	bool  question_paper;
	bool all;
}s1,s2,s3;
void first_process()
{
	s1.all=1;
	s1.paper=1;
	s1.question_paper=1;
	cout<<"Student Process One Completed"<<"\n";
}
void second_process()
{
	s2.all=1;
	s2.pen=1;
	s2.question_paper=1;
	cout<<"Student Process Two Completed"<<"\n";
}
void third_process()
{
	s3.all=1;
	s3.pen=1;
	s3.paper=1;
	cout<<"Student Process Three Completed"<<"\n";
}
int main()
{
	s1.all=0;s1.paper=0;s1.pen=0;s1.question_paper=0;
		s2.all=0;s2.paper=0;s2.pen=0;s2.question_paper=0;
		s3.all=0;s3.paper=0;s3.pen=0;s3.question_paper=0;
	do
	{
		int a,b;
		cout<<"1.Pen"<<"\n";
		cout<<"2.Paper"<<"\n";
		cout<<"3.Question Paper"<<"\n";
		cout<<"Select any two items to be placed on the shared table:"<<"\n";
		cin>>a>>b;
		if(a==1 && b==2  && s3.all==0)
		{
			third_process();
		}
		if(a==2 && b==1  && s3.all==0)
		{
			third_process();
		}
		if(a==2 && b==3  && s1.all==0)
		{
			first_process();
		}
		if(a==3 && b==2  && s1.all==0)
		{
			first_process();
		}
		if(a==1 && b==3 && s2.all==0)
		{
			second_process();
		}
		if(a==3 && b==1 && s2.all==0)
		{
			second_process();
		}
	}
	while(s1.all==0||s2.all==0||s3.all==0);
	cout<<"All Student Processes Completed";
	getch();
}
