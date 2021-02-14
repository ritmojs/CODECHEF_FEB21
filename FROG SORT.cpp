#include<bits/stdc++.h>
using namespace std;
int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
 
    // If element was found
    if (it != v.end()) 
    {
     
        // calculating the index
        // of K
        int index = it - v.begin();
        return index;
    }
    return -1;
   
}
int main()
{
    int T;int jump=0;
    cin>>T;
    int s;
    while(T--)
    {jump=0;
        int N;
        cin>>N;
        vector<int> W;int L[N],Ci[N],Sw[N];
        for(int i=0;i<N;i++)
     {       cin>>s;
     W.push_back(s);
     Sw[i]=s;
    
     }
     sort(Sw,Sw+N);
        for(int i=0;i<N;i++)
           cin>>L[i];
        for(int i=0;i<N;i++)
           Ci[i]=i;
        for(int i=1;i<N;i++)
        {
            int iw=getIndex(W,Sw[i]);
            int p=Ci[getIndex(W,Sw[i-1])];
            int c=iw;
            while(c<=p)
            {
                c=c+L[iw];
                Ci[iw]=c;
                jump++;
            }
        }
        cout<<jump<<endl;
        
        
    }
}