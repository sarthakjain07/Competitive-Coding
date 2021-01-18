#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

// program to find maximum record breaker using two conditions
//1. number should be max than all the previous numbers of array
//2. number should be greater than the following number
int main()
{
    int mx=-1,size,record_breaker=0;
    cin>>size;
    int arr[size+1];
    for (int i = 0; i < size; i++)
        cin>>arr[i];
    arr[size]=-1; // self placed element
    //condition if array contains only one element
    if(size==1)
        return 0;
    else
    {
        for (int  i = 0; i < size+1; i++)
        {
            if(arr[i]>mx && arr[i]>arr[i+1])
                record_breaker++;
            mx=max(mx,arr[i]);    
        }
        
    }
    cout<<record_breaker<<endl;    
    return 0;
}