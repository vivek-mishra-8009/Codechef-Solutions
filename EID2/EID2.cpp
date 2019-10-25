#include<bits/stdc++.h>

using namespace std;

struct record {
	int age;
	int amount;
};

int main()
{	
	struct record arr[3];
	int t;int flag;
	cin>>t;	
	while(t--)
	{
		flag=0;
	
		for(int i=0;i<3;i++)
		{
			cin>>arr[i].age;		
		}
		
		for(int i=0;i<3;i++)
		{
			cin>>arr[i].amount;		
		}
		
		for(int i=0;i<3;i++)
		{
			for(int j=i+1;j<3;j++)
			{
				if(arr[i].age>arr[j].age)
				{
					if(arr[i].amount<=arr[j].amount)
					{
						flag=1;
						break;
					}
				}
				else
				{ 
					if(arr[i].age==arr[j].age)
					{
						if(arr[i].amount!=arr[j].amount)
						{
							flag=1;
							break;
						}
					}
					else
					{
						if(arr[i].amount>=arr[j].amount)
						{
							flag=1;
							break;
						}
					}
				}
			}
			
			if(flag==1)
			{
				break;
			}
					
		}
		
		if(flag==1)
		{
			cout<<"NOT FAIR\n";
		}
		else
		{
			cout<<"FAIR\n";
		}
	
	}
	
	return 0;
}
