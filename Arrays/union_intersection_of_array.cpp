#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Union(int arr1[] , int arr2[] , int n ,int k)
{
	int i=0,j=0;
	cout<<"Union of array 1 and array 2"<<endl;
	while(i<n&&i<k)
	{
		if(arr1[i]<arr2[j])
		{
			cout<<arr1[i]<<endl;
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
			cout<<arr2[j]<<endl;
			j++;
		}
		else
		{
			cout<<arr1[j]<<endl;
			i++;
			j++;
		}
	}
	while(i<n)
	{
		cout<<arr1[i++]<<endl;
	}
	while(j<k)
	{
		cout<<arr2[j++]<<endl;
	}
}
int intersection(int arr1[], int arr2[], int n,int k)
{
	int i=0,j=0;
	cout<<"Intersection of array 1 and array 2"<<endl;
/*	while(i<n&&i<k)
	{
		if(arr1[i]<arr2[j])
		{
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
			j++;
		}
		else
		{
			cout<<arr2[j]<<endl;
			i++;
			j++;
		}
	}
	*/
	for(int i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			if(arr1[i]==arr2[j])
			{
				cout<<arr1[i]<<endl;
			}
		}
	}
}
int main()
{
	int n,k,i;
	cout<<"Enter size of 1st array:"<<endl;
	cin>>n;
	int arr1[n];
	cout<<"Enter Your 1st array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	cout<<"Enter size of 2nd array:"<<endl;
	cin>>k;
	int arr2[k];
	cout<<"Enter your 2nd Array"<<endl;
	for(i=0;i<k;i++)
	{
		cin>>arr2[i];
	}
	cout<<"This is your 1st array:"<<endl;
	for(i=0;i<n;i++)
	cout<<arr1[i]<<endl;
	cout<<"This is your 2nd array:"<<endl;
	for(i=0;i<k;i++)
	cout<<arr2[i]<<endl;
	sort(arr1,arr1+n);
	sort(arr2,arr2+k);
	cout<<"After Sorting your 1st array:"<<endl;
	for(i=0;i<n;i++)
	cout<<arr1[i]<<endl;
	cout<<"After sorting your 2nd array:"<<endl;
	for(i=0;i<k;i++)
	cout<<arr2[i]<<endl;
	Union(arr1,arr2,n,k);
	intersection(arr1,arr2,n,k);
}
