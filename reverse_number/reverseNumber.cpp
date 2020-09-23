#include<iostream>
using namespace std;

void reverseNumber(int n)
{
    int reverse=0,r;
    while (n!=0)
    {
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;

    }
    cout<<"The number after reversing is "<<reverse;

    
    
}

int main()
{
    int num=0;
    cout<<"Enter the no.\n";
    cin>>num;
    reverseNumber(num);

    return 0;
}
