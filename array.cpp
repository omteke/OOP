#include<iostream>
using namespace std; 
int main()
{
	int a[3][3],i,j;
	cout<<"enter the array elenemts";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"matrix is:";
	cout<<"\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<*(*(a+i)+j);
		}
		cout<<"\n";
	}
}

