// https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1#

class Solution{
  public:
  int findFloor(vector<long long> v, long long n, long long x){
    int start=0;
    int end=n-1;
    int res=-1;
    while (start<=end){
      int mid= start+(end-start)/2;
      if (x==v[mid])
        return mid;
      else if(x>v[mid])
        end= mid-1; // continue biniry search on left size of the array
      else 
      {
        res=mid; // store candidate in res and continue BS in right side
        start=mid+1;
      }
    }
    return res; // at last return greatest element smaller then x
  }
};
