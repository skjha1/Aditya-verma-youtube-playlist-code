

// WITHOUT MAP 

#include<bits/stdc++.h>
using namespace std ;
int main()
{   
    string s,p;
    cin>>s>>p ;
    int count=0 ;
    string c="" ;
    sort(p.begin(),p.end()) ;
    int k=p.length();
    int n=s.length() ;
    // -----------------------------------
    int i=0,j=0 ;
     while(j<n)
    {   c.push_back(s[j]) ;
        if(j-i+1<k)
        j++ ;
        else if(j-i+1==k)
        {   string cp=c;
            sort(cp.begin(),cp.end());
            if(cp==p)
            count++ ;
            c.erase(0,1);
            i++;
            j++;
        }

    }
cout<<count ;
// ----------------------------------------------------  
    return 0;
}
