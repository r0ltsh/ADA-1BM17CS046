#include<iostream>
using namespace std;

int main()
{
	int a[20],n,i,k,j,t,s;
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
		s=i;
		for(j=i+1;j<n;j++)
		{
			if(a[s]>a[j])
			s=j;
		}
		t=a[s];
		a[s]=a[i];
		a[i]=t;
	}
	cout<<"kth smallest element is :"<<a[k-1]<<endl;
	return 0;
}

/*output


Enter the no. of array elements
5
Enter the array elements
5
4
8
9
6
Enter the value of k less than n
3
kth smallest element is :6


*/
