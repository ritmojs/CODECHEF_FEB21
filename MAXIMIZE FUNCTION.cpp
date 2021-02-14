#include<bits/stdc++.h>
using namespace std;
int main()
{
	long T,N,res=0;
	cin>>T;
	for(int i=0;i<T;i++)
	
	{
		cin>>N;
		long a[N];
		for(int j=0;j<N;j++)
		cin>>a[j];
		sort(a,a+N);

		res=abs(a[0]-a[1])+abs(a[N-1]-a[1])+abs(a[0]-a[N-1]);
		cout<<res<<endl;
	}
return 0;	
}