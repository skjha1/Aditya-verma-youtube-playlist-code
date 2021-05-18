class Solution {
public:
    int count(int nums[], int target) {
        int n= nums.size()-1;
        int start=0;
        int end= n-1;
        int first=-1, last=-1;
        while(start <=end)
        {
            int mid = start + (end-start)/2;
            if (target==nums[mid])
            {
                first=mid; // we will get 1st occurrence of duplicate element
                end=mid-1;                
            }
            else if (target < nums[mid])
                end= mid-1;
            else 
                start = mid+1;            
        }
        start=0,end= nums.size()-1;
        while (start <= end)
        {
            int mid = start+(end-start)/2;
            if (target== nums[mid])
            {
                last=mid;  // we will get last occurrence of duplicate element
                start=mid+1;
            }
            else if (target< nums[mid])
                end= mid-1;
            else
                start = mid+1;
        }
        if (last==-1 && first==-1)
        {
          return 0;
        }
      int res=0;
      res= last-first+1; // to get count 
      return res;
    }
};
