#include<iostream>
using namespace std;

void arrayRotation()
{
  // cout<<"Enter size\n";
  int size,temp,i;
  cin>>size;
  int a[size];
  // cout<<"Enter the nos in array\n";
  for (i = 0; i < size; i++)
    cin>>a[i];
  temp=a[size-1];
  for (i = size-1; i>0; i--)
    a[i]=a[i-1];
  a[0]=temp;  
  // cout<<"the nos in array\n";
  for (i = 0; i < size; i++)
    cout<<a[i]<<" ";
  cout<<"\n";  
  
}

int main()
{
  int testcase;
  // cout<<"Enter testcase\n";
  cin>>testcase;
  while (testcase!=0)
  {
    arrayRotation();
    testcase--;
  }
  
  return 0;
}

