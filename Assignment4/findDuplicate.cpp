#include<bits/stdc++.h>
using namespace std;
bool findDuplicate(string str) 
{ 
    stack<char> Stack; 
  
    for (int i=0;i<str.length();i++) 
    { 
        if (str[i] == ')') 
        { 
            char top = Stack.top(); 
            Stack.pop(); 
            int elementsInside = 0; 
            while (top != '(') 
            { 
                elementsInside++; 
                top = Stack.top(); 
                Stack.pop(); 
            } 
            if(elementsInside < 1) { 
                return 1; 
            } 
        } 
        else
            Stack.push(str[i]); 
    } 
    return false; 
} 
int main()
{
    string st;
    cin>>st;
    if(findDuplicate(st))
    cout<<"Duplicate Found";
    else
    {
        cout<<"No duplicate found";
    }
    return 0;
    
}

