#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int divisor[11]={0,1,2,3,4,5,6,7,8,9,10};
	if(N<=10)
	cout<<divisor[N];
	else
	{
		for(int i=10;i>=1;i--)
		{
			if(N%i==0)
			{
				cout<<i;
				break;
			}
			
		}
	}
	return 0;
}