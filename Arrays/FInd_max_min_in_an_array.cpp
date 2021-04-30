#include <iostream>
using namespace std;
int main() {
	int largest,smallest;
	int a[5],i;
   cout<<"Enter the numbers in array\n";
   for(i=0; i<5; i++)
   cin>>a[i];
   cout<<"The numbers entered by user in array are ";
   for(i=0; i<5; i++)
   cout<<a[i]<<endl;
   largest=a[0];
   smallest=a[0];
   for(i=1;i<5;i++)
   {
   	if(largest<a[i])
   	{
   		largest=a[i];
	   }
	   if(smallest>a[i])
   		{
   		smallest=a[i];
	   }
   }
   cout<<"Smallest number this array is:"<<smallest<<endl;
   cout<<"Largest number this array is:"<<largest<<endl;
   return 0;
}
