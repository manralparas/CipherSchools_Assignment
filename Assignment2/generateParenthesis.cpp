#include<bits/stdc++.h>
using namespace std;
void Brackets(string s,int left, int right)
{
        if(left==0&&right==0)
        {
            cout<<s;
            return ;
        }
        if(left>0)
        Brackets(s+"(",left-1,right);
        if(left<right)
        {
            Brackets(s+")",left,right-1);
        }
    return ;
    
}
int main()
{
    int n;
    cin>>n;
    string s="";
    int left=n;
    int right=n;
    Brackets(s,left,right);


}
