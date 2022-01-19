#include<bits/stdc++.h>
using namespace std;
	void bubbleSort(int arr[],int n)
	{
		int i,j,temp;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
				temp=arr[j+1];
			    arr[j+1]=arr[j];
			    arr[j]=temp;
			}
			
	    }
	}
}
	void print(int arr[],int n,int k)
	{
		int i,j;
		for(i=k;i<n;i++)
		{
		cout<<arr[i]<<" ";
	}
}
	int main()
	{
		int n,i,k;
		cin>>n>>k;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		bubbleSort(arr,n);
		print(arr,n,k);
	}

