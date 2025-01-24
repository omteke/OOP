#include<iostream>
#include<string.h>
using namespace std;

class student{
private:
	int rollno;
	string name;
	
	public:void selfInfo(int r,string nm)
	{
		rollno =r;
		name=nm;
	}
    void display()
    {
	cout<<rollno<<endl;
	cout<<name<<endl;
    }
	
};

int main()
{
	student s1;
	s1.selfInfo(21,"om");
	s1.display();
	return 0;
}
