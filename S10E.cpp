#include<bits/stdc++.h>

using namespace std;



int main () {
	
	int t;
	cin>>t;
	while(t--)
	{
		int days; int good_day;
		cin>>days;
		int price[days];
		for(int i=0;i<days;i++)
		{
			cin>>price[i];
		}
		good_day=1;
		
		for(int j=1;j<days;j++)
		{
			int min = 1000;
			for(int k=j-1;k>=j-5 && k>=0; k--)
			{
				if(price[k]<min)
				{
					min=price[k];
				}			
				
			}
			
				if(price[j]<min)
				{
					good_day++;
				}	
		}
		
		cout<<good_day<<"\n";
		
	}
	
	
}
