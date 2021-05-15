class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       int val;
        priority_queue<int,vector<int>,greater<int>> minh;
        int n= nums.size();
        for (int i=0;i<n;i++)
        {
            minh.push(nums[i]);
            {
                if (minh.size()>k)
                    minh.pop();
            }
        }
        return minh.top();
        
    }
};
