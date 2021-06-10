#include<bits/stdc++.h>
using namespace std;
void find3Numbers(int arr[],int n,int sum)
{
	int l,r;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		l=i+1;
		r=n-1;
		while(l<r)
		{
			if(arr[i]+arr[l]+arr[r]==sum)
			{
				cout<<"Triplet is "<<arr[r]<<","<<arr[l]<<","<<arr[i];
				break;
			}
			else if(arr[i]+arr[l]+arr[r]<sum)
			{
				l++;
			}
			else
			{
				r--;
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum;
	cin>>sum;
	find3Numbers(arr,n,sum);
}
