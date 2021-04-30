#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Reverse(int arr[],int n)
{
	int temp,i;
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
}

int main()
{
	int n,i;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter an array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Your array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	Reverse(arr,n);
	cout<<"Reverse of the array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
