#include<iostream>
using namespace std;
int Largest_sum_contiguous(int arr[],int n)
{
	int tempsum=0;
	int maxsum=0;
	int negcount=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			negcount++;
		}
		tempsum=tempsum+arr[i];
		if(tempsum>maxsum)
		{
			maxsum=tempsum;
		}
		if(tempsum<0)
		{
			tempsum=0;
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
	cout<<"Enter size of array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter Your Array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Entered Array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"Max Subarray sum is "<<Largest_sum_contiguous(arr,n);
}
