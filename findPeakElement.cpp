int utility(int arr[], int low,  
                 int high, int n)  
{  
    int mid = low + (high - low)/2; 
  
  
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&  
        (mid == n - 1 || arr[mid + 1] <= arr[mid]))  
        return mid;  
  
 
    else if (mid > 0 && arr[mid - 1] > arr[mid])  
        return findPeakUtil(arr, low, (mid - 1), n);  
  
    else return findPeakUtil(arr, (mid + 1), high, n);  
}  

int utility(int arr[], int n)
{
   int low = 0;
   int high = n-1;
   return findPeakUtil(arr,low,high,n);
}

