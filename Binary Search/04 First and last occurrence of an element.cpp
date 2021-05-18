class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int start=0;
        int first=-1, last=-1;
        int end= nums.size()-1;
        while(start <=end)
        {
            int mid = start + (end-start)/2;
            if (target==nums[mid])
            {
                first=mid;
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
                last=mid;
                start=mid+1;
            }
            else if (target< nums[mid])
                end= mid-1;
            else
                start = mid+1;
        }
        res.push_back(first);
        res.push_back(last);
        return res;
    }
};
