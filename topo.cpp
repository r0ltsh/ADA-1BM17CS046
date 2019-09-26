#include<iostream>
using namespace std;
int n;
int ad[10][10],indegree[10];
void Topological()
{
   int i,j,k;
   for(i=0;i<n;i++)
   {
      indegree[i]=0;
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           indegree[i]+=ad[j][i];
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
          if(indegree[j]==0)
          {
              cout<<j<<"  ";
              indegree[j]=-1;
              break;
          }
       }
       for(int k=0;k<n;k++)
       {
            if(ad[j][k]==1)
                indegree[k]-=1;
       }

   }
}

int main()
{
    int i,j,p,p1,p2;
     cout<<"Enter the no of tasks"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           ad[i][j]=0;
       }
   }
    cout<<"Enter the no of prerequisits "<<endl;
    cin>>p;

    for(i=0;i<p;i++)
    {
         cout<<"enter the prerequisits"<<endl;
         cin>>p1>>p2;
         ad[p2][p1]=1;

    }

            Topological();

}
