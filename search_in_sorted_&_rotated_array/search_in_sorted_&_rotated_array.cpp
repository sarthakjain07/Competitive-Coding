#include<iostream>
using namespace std;

int leftSearch(int a[],int search_ele,int dividing_point)
{
  int low=0, high=dividing_point, mid;
  mid=(high+low)/2;
  while(1)
  {
    if(search_ele>a[dividing_point])
      return -1;
    else if(search_ele==a[low])
      return low;
    else if(search_ele==a[high])
      return high;
    else if(search_ele==a[mid])
      return mid;
    else if(search_ele>a[mid])
      low=mid+1;
    else if(search_ele<a[mid])
      high=mid-1;          
  }
}

int rightSearch(int a[],int size,int search_ele,int dividing_point)
{
  int low=dividing_point+1, high=size-1, mid;
  mid=(high+low)/2;
  while(1)
  {
    if(search_ele<a[low])
      return -1;
    else if(search_ele==a[low])
      return low;
    else if(search_ele==a[high])
      return high;
    else if(search_ele==a[mid])
      return mid;
    else if(search_ele>a[mid])
      low=mid+1;
    else if(search_ele<a[mid])
      high=mid-1;          
  }
}
void array_Input_Output()
{
  int size,i,search_ele,dividing_point,ele_position;
  cin>>size;
  int a[size];
  for (i = 0; i < size; i++)
    cin>>a[i];
  for (i = 0; i < size; i++)
  {
      if(a[i]>a[i+1])
        dividing_point=i;
  }  
  cin>>search_ele;
  if(search_ele>=a[0])
    ele_position=leftSearch(a,search_ele,dividing_point);
  else  
    ele_position=rightSearch(a,size,search_ele,dividing_point);
  cout<<ele_position<<"\n";
  // cout<<"dividing_point"<<"\n";

}

int main()
{
  int testcase;
  // cout<<"Enter testcase\n";
  cin>>testcase;
  while (testcase!=0)
  {
    array_Input_Output();  
    testcase--;
  }
  
  return 0;
}