#include<iostream>
#include<math.h>
using namespace std;

int conversion(string n)
{
    int size=n.size(),dec=0,j=0;
    for (int  i = size-1; i >=0; i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            cout<<(n[i]-'0')<<endl;
            dec=dec+(n[i]-'0')*pow(16,j);
            j++;
        }
        else
        {
            cout<<((n[i]-'A')+10)<<endl;
            dec=dec+((n[i]-'A')+10)*pow(16,j);
            j++;
        }
        

    }
    cout<<dec<<endl;
    return dec;
}

int main()
{
    string n;
    cin>>n;
    cout<<conversion(n);
}