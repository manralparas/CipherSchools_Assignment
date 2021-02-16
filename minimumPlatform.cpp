int findPlatform(int arr[], int dep[], int n)
{   int result=INT_MIN;
	sort(arr,arr+n);
	sort(dep,dep+n);
	int i=1;
	int j=0;
	int p=1;
	while(i<n&&j<n)
	{
	    if(arr[i]<=dep[j])
	    {
	        p++;
	        i++;
	        result=max(result,p);
	    }
	    else
	        {
	            j++;
	            p--;
	           
	        }
	}
	return result;
	
}
