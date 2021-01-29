#include<iostream>
using namespace std;

int main()
{
    int n;
    bool check[]={false};
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
        cin>>a[i];
    for (int  i = 0; i < n; i++)
    {
        if(a[i]>=0)
            check[a[i]]=true;
    }
    int i=1;
    while (check[i]!=false)
        i++;
    cout<<i<<endl;    


    
    return 0;
}