long long int Merge(long long a[],long long l,long long mid,long long r)
{ 
    long long  int  n1=mid-l+1;
    long long  int n2=r-mid;
    long long  int left[n1];
    long long int right[n2];
    for(int i=0;i<n1;i++)
    left[i]=a[l+i];
    for(int i=0;i<n2;i++)
    right[i]=a[mid+1+i];
    
    long long int i=0;
    long long int j=0;
    long long int k=l;
    long long int count=0;
    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];
            i++;
            k++;
            
        }
        else
        {
            a[k]=right[j];
            j++;
            k++;
            count+=n1-i;
        }
    }
    while(i<n1)
    {
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=right[j];
        j++;
        k++;
    }
    return count;
    
}
long long int merge(long long a[],long long l,long long r)
{   long long int count=0;
    if(l<r)
    {
        long long mid=l+(r-l)/2; 
        count+= merge(a,l,mid);
        count+= merge(a,mid+1,r);
        count+= Merge(a,l,mid,r);
    }
    return count;
}
long long int inversionCount(long long A[],long long N)
{

    return merge(A,0,N-1);

}
