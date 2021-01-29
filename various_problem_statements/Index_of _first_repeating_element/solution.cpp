#include<iostream>
#include<algorithm>// to use max and min function
#include<climits>// to use INT_MAX and INT_MIN
using namespace std;

int main()
{
    int n,min_index=INT_MAX,i;
    cin>>n;
    int a[n];
    for (i = 0; i < n; i++)
        cin>>a[i];
    int N=100;    
    int b[N];
    for (i = 0; i < N; i++)
    {
        b[i]=-1;
    }
    
    for (i = 0; i < n; i++)
    {
        if(b[a[i]]!=-1)
            min_index=min(min_index,b[a[i]]);
        else
            b[a[i]]=i;    
    }
    cout<<min_index+1<<endl;
        

    

    return 0;
}