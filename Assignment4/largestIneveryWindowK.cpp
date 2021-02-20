#include <bits/stdc++.h>
using namespace std;
void KMax(int arr[], int n, int k)
{
     
    deque<int> Dq(k);
    int i;
    for (i = 0; i < k; ++i) 
    {
        while ((!Dq.empty())&&arr[i]>=arr[Dq.back()])
            Dq.pop_back();
        Dq.push_back(i);
    }
    for (; i < n; ++i) 
    {
        cout << arr[Dq.front()] << " ";
        while ((!Dq.empty()) && Dq.front()<= i - k)
            Dq.pop_front();
        while ((!Dq.empty()) && arr[i] >=arr[Dq.back()])
            Dq.pop_back();
        Dq.push_back(i);
    }
    cout << arr[Dq.front()];
}
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int k = 3;
    KMax(arr, n, k);
    return 0;
}