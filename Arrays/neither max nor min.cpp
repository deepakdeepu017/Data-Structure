#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<"elements in the array\n";		
	for(int i=0; i<n; i++)
	cin>>arr[i];
		
	int min=arr[0], max=arr[0];
	for(int i=0; i<n; i++)
	{
		if(min>arr[i])
		min=arr[i];
		if(max<arr[i])
		max=arr[i];
	}
	int result;
	
	if(arr[0]>arr[1] && arr[0]>arr[2])
	{
		if(arr[1]>arr[2])
		result = arr[1];
		else
		result = arr[2];
	}
	else if(arr[1]>arr[0] && arr[1]>arr[2])
	{
		if(arr[0]>arr[2])
		result = arr[0];
		else
		result = arr[2];
	}
	else
	{
		if(arr[0]>arr[1])
		result = arr[0];
		else
		result = arr[1];
	}
	cout<<"Element which is neither minimum nor maximum is : "<<result<<endl;
}
