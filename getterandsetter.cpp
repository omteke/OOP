#include<iostream>
#include<string.h>
using namespace std;

class student{
	
	    
	string name;
	int age,roll_no;
	string grade;
	
	public:
	void setinfo(string nm,int ag,int roll,string gra)
	{
		name=nm;
		age=ag;
		roll_no=roll;
		grade=gra;
	}
	
	void getinfo()
	{
		cout<<"student name is:"<<name<<endl;
		cout<<"student age is:"<<age<<endl;
		cout<<"student roll_no is:"<<roll_no<<endl;
		cout<<"student grade is:"<<grade<<endl;
	}	
};

int main()
{
	student s1;
//	s1.name="om";
//	s1.age=20;
//	s1.roll_no=134;
//	s1.grade="A+";
	s1.setinfo("om",20,134,"A+");
	s1.getinfo();
//	cout<<"student info:"<<endl;
//	cout<<"student name is:"<<s1.name;
//	cout<<"student age is:"<<s1.age;
//	cout<<"student roll_no is:"<<s1.roll_no;
//	cout<<"student grade is:"<<s1.grade;
}
