#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,i,n;
	cout<<"Enter Size Of array:"<<endl;
	cin>>k;
	int a[k];
	cout<<"Enter your array"<<endl;
	for(i=0;i<k;i++)
	{
		cin>>a[i];
	}
	cout<<"Your Array is:"<<endl;
	for(i=0;i<k;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"Enter Kth max and min element:"<<endl;
	cin>>n;
	sort(a,a+k);
	cout<<"kth min element"<<a[n-1]<<endl;
	cout<<"kth max element"<<a[k-n]<<endl;
}
