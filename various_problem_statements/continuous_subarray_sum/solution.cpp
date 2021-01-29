#include<iostream>
using namespace std;

int main()
{
    int S,n,st=0,en=0,currsum;
    cin>>n>>S;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    currsum=a[en]+a[st];
    cout<<currsum;

    // while (st<=n)
    // {
    //     if(currsum+a[en+1]>S)
    //     {
    //         en++;
    //         currsum=a[st]+a[en];
    //     }
    //     else if(currsum<=S)
    //     {
    //         st++;
    //         currsum=a[st]+a[en];
    //     }
    //     else if(currsum==S)
    //         break;
    // }
    // cout<<st<<" "<<en;
        

    
    return 0;
}