#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
	int n,k;
  cin>>t;
	while (t--)
  {
    cin>>n>>k;
	    int a;
    vector<int> v;
	    priority_queue<int,vector<int>,greater<int>> minh;
    for (int i=0;i<n;i++)
	    {
      cin>>a;
      minh.push(a);
      if (minh.size()>k)
      {
        int val= minh.top();
	      minh.pop();
        v.push_back(val);
      }
    }
    while (!minh.empty())
    {
      int val = minh.top();
      minh.pop();
      v.push_back(val);
    }
    for (int i=0;i<n;i++){
      cout<<v[i]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
    
