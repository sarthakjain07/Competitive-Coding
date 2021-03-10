#include<iostream>
using namespace std;

int main()
{
    int size,i,j=0;
    cin>>size;
    int a[size],b[size],k=size-1;
    for (i = 0; i < size; i++)
        cin>>a[i];

    for (i = 0; i < size; i++)
    {
        if(a[i]<0)
        {
            b[j]=a[i];
            j++;
        }
        else if(a[i]>0)
        {
            b[k]=a[i];
            k--;
        }
    }
    for (i = 0; i < size; i++)
        cout<<b[i]<<" ";
    
    return 0;
}