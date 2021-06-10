#include<iostream>
using namespace std;
int Largest_sum_contiguous(int arr[],int n)
{
	int currentsum=0;
	int maxsum=0;
	int negcount=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			negcount++;
		}
		currentsum=currentsum+arr[i];
		if(currentsum>maxsum)
		{
			maxsum=currentsum;
		}
		if(currentsum<0)
		{
			currentsum=0;
		}
	}
	if(negcount==n)
	{
		int max=arr[0],i;
		for(i=0;i<n;i++)
		{
			if(max<arr[i])
			{
				max=arr[i];
			}
		}
		return max;
	}
	else
	{
		return maxsum;
	}
}
int main()
{
	int n,i,a;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Max Subarray sum is "<<Largest_sum_contiguous(arr,n);
}
