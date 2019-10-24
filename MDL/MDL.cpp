#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int Num;
		cin>>Num;
		
		int arr[Num];
		
		for(int i=0;i<Num;i++)
		{
			cin>>arr[i];
		}
		int n = Num;
		for(int iter=0;iter<n-2;iter++)
		{
		
			int median;
		
			if (arr[0] > arr[1])  
    		{ 
        		if (arr[1] > arr[2]) 
            		median=1; 
        		else if (arr[0] > arr[2]) 
            			median=2; 
        			else
            			median=0; 
    		} 
    		else 
    		{ 
        		// Decided a is not greater than b. 
        		if (arr[0] > arr[2]) 
            		median=0; 
        		else if (arr[1] > arr[2]) 
            			median=2; 
        			else
            			median=1; 
    		} 
		
			//cout<<"position "<<median<<endl;
		
			for(int j=0;j<Num-1;j++)
			{
				if( j >= median)
				{
					arr[j]=arr[j+1];
				}
			}	
			Num=Num-1;
		
		}	
		for (int j=0; j<Num; j++)
			{
				cout<<arr[j]<<" ";
			}
			cout<<endl;
		
	}
}
