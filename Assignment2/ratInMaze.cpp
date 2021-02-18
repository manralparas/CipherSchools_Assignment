#include<bits/stdc++.h>
using namespace std;
bool isSafe(int x,int y,int n,vector<vector<int>>&maze)
{    
    if(x<n&&y<n&&maze[x][y]==1)
    return true;
    return false;

}
bool ratInmaze(int x, int y,vector<vector<int>>&maze,vector<vector<int>>&solution,int n)
{
        if(x==n-1&&y==n-1)
        {
            solution[x][y]=1;
            return true;
        }
        if(isSafe(x,y,n,maze))
        {
            solution[x][y]=1;
            if(ratInmaze(x+1,y,maze,solution,n))
            return true;
            if(ratInmaze(x,y+1,maze,solution,n))
            return true;
            solution[x][y]=0;
            return false;
        }
        return false;


}
int main()
{   int n;
    cout<<"enter the value of n";
    cin>>n;
    vector<vector<int>>maze( n ,vector<int> (n, 0));
    vector<vector<int>>solution(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>maze[i][j];
    ratInmaze(0,0,maze,solution,n);
    cout<<"printing solution matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<solution[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
