class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    
	    int i=0,int =j;
	    while(i<n&&j<m)
	    {
	        if(arr1[i]<arr2[j])
	        {
	            i++;
	        }
	        else
	        {
	            swap(arr[i],arr[j]);
	            i++;
	            
	        }
	    }
	    
	}
};
