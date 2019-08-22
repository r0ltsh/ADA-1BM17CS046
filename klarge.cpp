#include<iostream>
using namespace std;

int main()
{
	int a[20],n,i,k,j,t,l;
	cout<<"Enter the no. of array elements"<<endl;
	cin>>n;
	//a=new int[n];
	cout<<"Enter the array elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the value of k less than n"<<endl;
	cin>>k;
	for(i=0;i<k;i++)
	{
		l=i;
		for(j=i+1;j<n;j++)
		{
			if(a[l]<a[j])
			l=j;
		}
		t=a[l];
		a[l]=a[i];
		a[i]=t;
	}
	cout<<"k largest elements in array are:"<<endl;
	for(i=0;i<k;i++)
	{
	    cout<<a[i]<<endl;
	 }
	return 0;
}

/*output


Enter the no. of array elements
5
Enter the array elements
4
7
8
5
6
Enter the value of k less than n
3
k largest elements in array are:
8
7
6



*/
