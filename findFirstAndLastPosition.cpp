#include<iostream>
using namespace std;
 
void findFirstAndLast(int array[], int n, int x)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (x != array[i])
            continue;
        if (first == -1)
            first = i;
        last = i;
    }
    if (first != -1)
        cout <<first<<" "<<last;
    else
        cout << "-1";
 }

int main()
{   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int x;
    cin>>x;
    findFirstAndLast(arr, n, x);
    return 0;
}
