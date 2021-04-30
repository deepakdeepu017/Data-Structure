#include<iostream>
using namespace std;
int main()
{
	int n,i,last;
	cout<<"Enter size of array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter your array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Your Array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"Resultant array is:"<<endl;
	last=arr[n-1];
	for(i=n-1;i>=1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=last;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
