class Solution{
  public:
  int findFloor(vector<long long> v, long long n, long long x){
    int start=0;
    int end=n-1;
    int res=-1;
    while (start<=end){
      int mid= start+(end-start)/2;
      if (x==v[mid])
        return v[mid];
      else if(x<v[mid])
      {
        res=v[mid]; // store candidate in res and continue BS in reft side to find smallest element greater then x
        end= mid-1;  // then set end at the index mid-1 
      }
      else 
      {
        start=mid+1; // continue biniry search on right size of the array
      }
    }
    return res; // at last return smallest element greater then x
  }
};
