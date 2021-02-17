class Solution {
private:
   int Path(int x,int y,int m,int n)
    {
       if(x>=m||y>=n) 
           return 0;
        if(x==m-1&&y==n-1)
            return 1;
        return (Path(x+1,y,m,n)+Path(x,y+1,m,n));
    }
public:
    int uniquePaths(int m, int n) {
        return Path(0,0,m,n);
    }
};
