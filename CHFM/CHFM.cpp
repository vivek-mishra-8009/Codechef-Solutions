#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
	
		long long int nv;
		cin>>nv;
		
		long long int arr[nv]; long long int sv=0;
		for(int i=0;i<nv;i++)
		{
			cin>>arr[i];
			sv+=arr[i];
		}
		
		long double Am = (long double)sv/nv;
		//cout<<"Am= "<<Am<<endl;
		bool flag=false;
		int position=0;
		for(int i=0;i<nv;i++)
		{
			if(arr[i]==Am)
			{
				flag=true;
				position = i+1;
				break;
			}
		}
		
		if(flag==true)
		{
			cout<<position;
		}
		else
		{
			cout<<"Impossible\n";
		}
	
	}
	return 0;
}
