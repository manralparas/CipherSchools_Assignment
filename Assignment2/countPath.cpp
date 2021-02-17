#include <iostream> 
using namespace std; 
 
int Paths(int m, int n) 
{ 
   if (m == 1 || n == 1) 
        return 1; 
   return Paths(m - 1, n) + Paths(m, n - 1); 
} 
  
int main() 
{   int x;
    int y;
    cin>>x>>y;
    cout << Paths(x, y); 
    return 0; 
} 
