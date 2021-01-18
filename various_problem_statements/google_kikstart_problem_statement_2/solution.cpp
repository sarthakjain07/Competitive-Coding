#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,diff,length=1,mx=-1;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    diff=a[1]-a[0];
    for (int i = 1; i < n; i++)
    {
        if(diff==a[i+1]-a[i])
        {
            length++;
            // mx=length;
        }    
        else
        {
            diff=a[i+1]-a[i];
            length=1;
        }
        mx=max(mx,length);    
    }
    cout<<mx+1<<endl;
    return 0;
}