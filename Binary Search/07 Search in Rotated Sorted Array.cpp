class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = nums.size();
        
        if(s==1) { // corner case
            if(nums[0]==target)
                return 0;
            return -1;
        }
        
        if(nums[0]<nums[s-1])  //case when nums is already sorted.
            return bs(nums,0,s-1,target);
       
        int pivot = -1;

        int l=0,h=s-1;
        
        while(l<=h) {  //Finding pivot element
            int m = l+(h-l)/2;
            if(nums[m]<nums[(m+1)%s] && nums[m]<nums[(m-1+s)%s]) {
                pivot = m;
                break;
            }
            else if(nums[m]>=nums[0] && nums[m]>=nums[s-1])
                l = (m+1)%s;
               
            else
                 h = (m-1+s)%s;
                
        }
        if(target >= nums[pivot] && target <= nums[s-1])
            return bs(nums,pivot,s-1,target);
        
        return bs(nums,0,pivot-1,target);
        
    }
    int bs(vector<int>& nums,int l,int h,int target) { //Binary Search Function
        while(l<=h) {
            int m = l+(h-l)/2;
            if(nums[m]==target)
                return m;
            else if(target > nums[m])
                l = m+1;
            else
                h = m-1;
        }
        return -1;
    }
};
