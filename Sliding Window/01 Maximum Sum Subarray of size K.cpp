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
    sum=sum+Arr[j]; // do calculation to reduse tc
    if (j-i+1<K) J++; // increament j upto when the size of the size of window is not equal to required size
    else if ((j-i+1)==K) // when sindow size hit to the required window size 
    {
      mx=max(mx,sum); // selecting ans from the candidates
      sum=sum-Arr[i]; // start removing from the first
      i++;
      j++;
    }
  }
  return mx;
}
};
