#include<iostream>
using namespace std;

int max(int a,int b)
{
	if(a>b)
		return a;
	return b;
}

bool isMaxheap(int a[],int n)
{
	int l=n/2;
	int m;
	for(int i=l;i>0;i--)
	{
		if(a[i]<max(a[(2*i)],a[(2*i+1)]))
			return false;
	}
	return true;
}
int main()
{
	int n;
	cout<<"Enter the size of the heap:";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the heap:";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(isMaxheap(a,n))
	{
		cout<<"True"<<endl;
	}
	else
	{
		cout<<"False"<<endl;
	}
}
