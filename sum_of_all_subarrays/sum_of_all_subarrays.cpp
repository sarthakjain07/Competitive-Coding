#include<iostream>
using namespace std;


int main()
{
    int size,sum=0;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin>>arr[i];
    for (int i = 0; i < size; i++)
        sum+=arr[i]*(size-i)*(i+1);
    cout<<sum;    
    

}