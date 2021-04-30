#include<iostream>
using namespace std;
void Func_Sort(int arr[],int n)
{
	int z_count=0,one_count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			z_count++;
		}
		else if(arr[i]==1)
		{
			one_count++;
		}
	}
	for(int i=0;i<z_count;i++)
	{
		arr[i]=0;
	}
	for(int i=z_count;i<(z_count+one_count);i++)
	{
		arr[i]=1;
	}
	for(int i=(z_count+one_count);i<n;i++)
	{
		arr[i]=2;
	}
}
int main()
{
	int n,i;
	cout<<"Enter Size Of array"<<endl;
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
	Func_Sort(arr,n);
	cout<<"After Sorting your array is"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
