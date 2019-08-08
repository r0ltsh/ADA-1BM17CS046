#include<iostream>

using namespace std;
 int main()
 {

      int max,a[20],n,i;
      cout<<"Enter the no. of array elements"<<endl;
      cin>>n;
      cout<<"Enter the array elements"<<endl;
      for(i=0;i<n;i++)
      {
        cin>>a[i];
        }
        max=a[0];
        for(i=1;i<n;i++)
        {
           if(a[i]>max)
             max=a[i];
         }
         cout<<"Maximum :"<<max<<endl;
         return 0;
 }
