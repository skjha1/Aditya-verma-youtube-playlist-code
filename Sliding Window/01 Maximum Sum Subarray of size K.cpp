// https://www.geeksforgeeks.org/find-maximum-minimum-sum-subarray-size-k/
//Time Complexity : O(n)
//Auxiliary Space : O(1)
class Solution{
  public:
int maximumSumSubarray(int K, vector<int> &Arr , int N){
  int i=0;
  int j=0;
  int sum=0;
  int mx=INT_MIN;
  while (j<N){
    sum=sum+Arr[j];
    if (j-i+1<K) J++;
    else if ((j-i+1)==K)
    {
      mx=max(mx,sum);
      sum=sum-Arr[i];
      i++;
      j++;
    }
  }
  return mx;
}
};
