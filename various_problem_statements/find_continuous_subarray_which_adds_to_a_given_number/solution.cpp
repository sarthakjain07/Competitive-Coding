#include<iostream>
using namespace std;

int main()
{
    int size,sum,st=0,en=0,S;
    cin>>size>>S;
    int a[size];
    for (int i = 0; i < size; i++)
        cin>>a[i];
    sum=a[st];
    while(st<size && en<size)
    {
        if(sum==S)
            break;
        else if(sum<S)
        {
            en++;
            if(en==st || en<st)
                en++;
            sum=sum+a[en];    
        }
        else if(sum>S)
        {
            sum=sum-a[st];
            st++;
        }
    }  
    cout<<st+1<<" "<<en+1<<endl;  





    return 0;
}
