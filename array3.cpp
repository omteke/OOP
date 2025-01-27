#include<iostream>
using namespace std;
int main()
{
	int a[5][5],p,q,r,i,j;
	cout<<"enter the array elenemts";
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			a[i][j]=5*i+j+1;
		}
	}
    cout<<"\n";
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	}
	cout<<"\n";
	cout<<"enter the position for smallest element";
	cin>>p;
	q=p/5;
	r=p%5;
	cout<<a[q][r-1];
}
