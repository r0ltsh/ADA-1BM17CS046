#include<bits/stdc++.h>
using namespace std;
#define N 4
#define SQN 2
#define UNASSIGNED 0

bool UsedInCol(int grid[N][N],int col,int num)
{
   for(int row=0;row<N;row++)
      if(grid[row][col]==num)
        return true;

    return false;
}
bool UsedInRow(int grid[N][N],int row,int num)
{
   for(int col=0;col<N;col++)
      if(grid[row][col]==num)
        return true;

    return false;
}
bool UsedInBox(int grid[N][N],int boxrow,int boxcol,int num)
{
   for(int row=0;row<SQN;row++)
     for(int col=0;col<SQN;col++)
      if(grid[row+boxrow][col+boxcol]==num)
        return true;

    return false;
}
bool IsSafe(int grid[N][N],int row,int col,int num)
{
   return !UsedInCol(grid,col,num)&&!UsedInRow(grid,row,num)&&!UsedInBox(grid,row-row%SQN,col-col%SQN,num);

}

bool FindUnsignedLocation(int grid[N][N],int &row,int &col)
{
   for(row=0;row<N;row++)
     for(col=0;col<N;col++)
        if(grid[row][col]== UNASSIGNED )
           return true;

   return false;
}

bool SolveSudoku(int grid[N][N])
{
   int row,col;
   if(!FindUnsignedLocation(grid,row,col))
   return true;
   for(int num=1;num<=N;num++)
   {
      if(IsSafe(grid,row,col,num))
      {
          grid[row][col]=num;
          if(SolveSudoku(grid))
            { return true;
            }

          grid[row][col]=UNASSIGNED;
      }
   }
  return false;
}
int main()
{
   int grid[N][N];
   cout<<"Enter the sudoku matrix"<<endl;
   for(int i=0;i<N;i++)
     for(int j=0;j<N;j++)
     cin>>grid[i][j];
     bool r=SolveSudoku(grid);
   if(r)
   {
      cout<<"The Solution IS:"<<endl;
      for(int i=0;i<N;i++)
      {
         for(int j=0;j<N;j++)
         {
            cout<<grid[i][j]<<"  ";
         }
         cout<<endl;
       }
   }
   else
   cout<<"NO SOLUTION"<<endl;
  return 0;
}



