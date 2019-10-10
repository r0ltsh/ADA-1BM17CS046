#include<iostream>
#include<algorithm>

using namespace std;

int n,W,v[50][50],val[50],w[50];

int knapsack(int w[],int val[],int W)
{

    for (int i=0;i<=n;i++)   v[i][0]=0;
    for (int j=0;j<=W;j++)   v[0][j]=0;

    for (int i=1;i<=n;i++)
        for (int j=1;j<=W;j++)
        {
              if(j-w[i]>=0)
                    v[i][j]=std::max(v[i-1][j],(val[i]+v[i-1][j-w[i]]));
              else  v[i][j]=v[i-1][j];
        }
    return v[n][W];
}

int main()
{
     int x;
     cout<<"Enter the no. of items"<<endl;
     cin>>n;
     cout<<"Enter the capacity"<<endl;
     cin>>W;

     w[0]=0;
     val[0]=0;

     cout<<"Enter the Weight of items"<<endl;

     for(int i=1;i<=n;i++)  cin>>w[i];

     cout<<"Enter the value of items"<<endl;

     for(int i=1;i<=n;i++)  cin>>val[i];

     x=knapsack(w,val,W);
     cout<<"The Solution is: "<<x<<endl;
     cout<<"The Matrix is:"<<endl;
     for (int i=0;i<=n;i++)
     {
        for (int j=0;j<=W;j++)
            cout<<v[i][j]<<"  ";
        cout<<endl;
     }

}
