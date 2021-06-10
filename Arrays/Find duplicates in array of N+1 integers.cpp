#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		a[a[i]%n]=a[a[i]%n]+n;
	}
	cout<<"The Repeating Numbers is:\n";
	for(i=0;i<n;i++)
	{
	if(a[i]>=n*2)
	{
		cout<<i<<" ";
	}
	}
}
