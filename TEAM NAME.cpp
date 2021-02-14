#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    
    ll T;
    cin>>T;
    while(T--)
    {
        ll N;
        cin>>N;
        string s[N];string p,q;
        for(ll i=0;i<N;i++)
        {
            cin>>s[i];
            
        }
        sort(s,s+N);
        ll ans=0;
        for(ll i=0;i<N;i++)
        {
            for(ll j=i+1;j<N;j++)
            {
                p=s[i];
                q=s[j];
                swap(p[0],q[0]);
               
                if(p[0]==q[0])
                {
                    
                }
                else if((!binary_search(s,s+N,p) && (!binary_search(s,s+N,q))))
                {
                    ans+=2;
                }
                
            }
        }
        cout<<ans<<endl;
    }

	return 0;
}
