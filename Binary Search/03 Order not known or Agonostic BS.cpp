class Solution {
public:
    int search(vector<int>& nums, int target) {
      int start= 0;
      int end= nums.size()-1;
      if (nums[0]>nums[1]){ // desending
        while (start <= end)
        {
            int mid = start + (end-start)/2;
            if (target==nums[mid])
                return mid;
            else if (target<nums[mid])
                start= mid+1; // little variation
            else 
                end= mid-1;
        }
        return -1;
      }
      if (nums[0]<nums[1]){ // ascending 
         while (start <= end)
        {
            int mid = start + (end-start)/2;
            if (target==nums[mid])
                return mid;
            else if (target<nums[mid])
                end= mid-1;
            else 
                start= mid+1;
        }
        return -1;
      }
        
    }
};
