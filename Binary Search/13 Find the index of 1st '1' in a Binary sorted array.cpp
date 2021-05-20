class Solution{
  public:
  int firstIndex(int a[], int n)
  {
    int start =0;
    int end= n-1;
    while (start<=end){
      int mid = start+(end-start)/2;
      if (a[mid]==1)
      {
        if (a[mid-1]==1) // when the previous is also 1 then check in the right side 
        {
          end=mid-1;
        }
        else 
          return mid;
      }
      else 
        if (a[mid]==0)
        {
          start=mid+1;
        }
    } // close of while loop 
    return -1;
  }
};
