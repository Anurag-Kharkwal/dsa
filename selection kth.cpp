#include<bits/stdc++.h>
using namespace std;
	void selectionSort(int arr[],int n)
	{
		int i,j,temp;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(arr[j]<arr[i])
				{
				temp=arr[i];
			    arr[i]=arr[j];
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
		selectionSort(arr,n);
		print(arr,n,k);
	}

