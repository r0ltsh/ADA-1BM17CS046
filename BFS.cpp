#include<iostream>
#include <queue>
using namespace std;

int n,v[20],ad[20][20];

void BFS(int k)
{
    v[k]=1;
    queue<int> q;
    q.push(k);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(int i=0;i<n;i++)
        {
            if(ad[x][i]==1 && v[i]==0)
            {
                q.push(i);
                v[i]=1;
                cout<<i+1;
            }

        }

    }

}

int main()
{
    int k,i=0;
    cout<<"Enter the no of vertices and source vertex "<<endl;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        v[i] = 0;
    cout<<"Enter the adjacency matrix: "<<endl;
    for(i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>ad[i][j];
    cout<<k;
    BFS(k-1);
    return 0;
}
