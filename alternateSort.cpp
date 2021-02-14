class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	   vector<int> result;
	   sort(arr,arr+N);
	   int i=0,j=N-1;
	   while(i<j)
	   {     result.push_back(arr[j--]);
	       result.push_back(arr[i++]);
	      
	   }
	   if(N%2!=0)
	   result.push_back(arr[j]);
	   
	  return result;
	}
	

};
