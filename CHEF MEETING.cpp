#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(string li,string ri,string p)
{
    if(li<=p)
    {
        if(p<=ri)
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }
    else
    {
        cout<<"0";
    }
    
}
string convert(string str,string pt)
{
	int h1=(int)str[0]-'0';
	int h2=(int)str[1]-'0';
	int hh=h1*10+h2%10;
	if(pt[0]=='A')
	{
		if(hh==12)
	{
		str[0]='0';
		str[1]='0';
	}
		
	}
	else
	{
		if(hh!=12)
		{
			hh=hh+12;
		
			str[0]=hh/10+'0';
			str[1]=hh%10+'0';
		}
	}
	
	return str;
}

int main() {
	// your code goes here
	
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
        string p,pt;
        cin>>p>>pt;
        p=convert(p,pt);
        ll N;
        cin>>N;
        string li,lt,ri,rt;
        for(ll i=0;i<N;i++)
        {
            cin>>li>>lt>>ri>>rt;
            li=convert(li,lt);
            ri=convert(ri,rt);
            solve(li,ri,p);
        }
        cout<<endl;
     
    }
    
    
	return 0;
}
