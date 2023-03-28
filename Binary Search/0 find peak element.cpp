class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 0; // basically when we have only one element in the array return the index of the only element present in it.
        int start=0;
        int  end= n-1;
        while (start<=end)
        {
            int mid=start+(end-start)/2;
            if (mid>0 and mid<n-1) // this will check btw the 1st and last// except 1st and last it will chech throughout
            {
                if (nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
                    return mid;
                else if (nums[mid-1]>nums[mid] && nums[mid+1])
                    end=mid-1;
                else 
                    start=mid+1;
            }
            else if (mid==0)
            {
                if (nums[0]>nums[1])
                    return 0;
                else
                    return 1;
            }
            else if(mid==n-1)
            {
                if (nums[n-1]>nums[n-2])
                    return n-1;
                else
                    return n-2;
            }
        }
        return 0;
        
    }
};
