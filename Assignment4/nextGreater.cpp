
void nextLargerElement(long long arr[], int n){
    stack<long long> s;
    vector<long long> v;
    s.push(arr[n-1]);
    v.push_back(-1);
    for(long long i=n-2;i>=0;i--){
    while(!s.empty() && s.top()<=arr[i])
    s.pop();
    long long ng = (s.empty())?-1:s.top();
    v.push_back(ng);
    s.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    for (long long i = 0; i < v.size(); i++)
    cout << v[i] << " ";
}