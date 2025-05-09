#include<iostream>
#include<string.h>
using namespace std;

class student{
	
	public:
		string name;
		int age,roll_no;
		string grade;
		
};

int main()
{
	student s1;
	s1.name="om";
	s1.age=20;
	s1.roll_no=134;
	s1.grade="A+";
	
	cout<<"student info:"<<endl;
	cout<<"student name is:"<<s1.name;
	cout<<"student age is:"<<s1.age;
	cout<<"student roll_no is:"<<s1.roll_no;
	cout<<"student grade is:"<<s1.grade;
}
