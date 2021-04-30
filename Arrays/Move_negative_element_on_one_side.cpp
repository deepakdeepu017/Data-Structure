#include<iostream>
using namespace std;
void N_P_Move(int arr[],int n)
{
	int p=0,q=0;
	int negative[p],positive[q];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			negative[p]=arr[i];
			p++;
		}
		else
		{
			positive[q]=arr[i];
			q++;
		}
	}
	for(int i=0;i<p;i++)
	{
		arr[i]=negative[i];
	}
	for(int i=0;i<q;i++)
	{
		arr[i+p]=positive[i];
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
	N_P_Move(arr,n);
	cout<<"Resultant array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
