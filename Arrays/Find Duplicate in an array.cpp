#include<iostream>
using namespace std;

int duplicateFunction(int arr[], int num)
{
     int i,j;
     for(i=0; i<num; i++)
     {
         for(j=i+1; j<num; j++)
         {
             if(arr[i]==arr[j])
             {
                 return arr[i];
             }
         }
     }
    return -1;
}

int main()
{
  int i,j,num,arr[20];

  cout<<" Enter the size of array --> ";
  cin>>num;
  cout<<"Enter Your Array -->"<<endl;
  for(i=0; i<num; i++)
  {
    cin >> arr[i];
  }  

  j=duplicateFunction(arr,num);
  if (j==-1)
    cout<<" There is no Any duplicate element in array";
else
    cout<< j <<" is present two or more time in array ";
}
