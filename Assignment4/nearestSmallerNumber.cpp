#include <bits/stdc++.h> 
using namespace std; 
void PrevSmaller(int arr[], int n) 
{ 
    stack<int> S; 
    for (int i=0; i<n; i++) 
    { 
        while (!S.empty() && S.top() >= arr[i]) 
            S.pop(); 
        if (S.empty()) 
            cout << " "; 
        else   
            cout << S.top() << " "; 
        S.push(arr[i]); 
    } 
} 
int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i] ;
    PrevSmaller(arr, n); 
    return 0; 
} 
