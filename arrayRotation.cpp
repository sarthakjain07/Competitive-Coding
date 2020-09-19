#include <iostream>
using namespace std;

void arrayRotation()
{
    int no_ele, d;
    // cout << "Enter the size of array and rotation\n";
    cin >> no_ele >> d;
    int a[no_ele], temp[d],j=d;
    // cout << "entr the ele of array\n";
    for (int i = 0; i < no_ele; i++)
    {
        cin >> a[i];
        if (j > 0)
        {
            temp[i] = a[i];
            j--;
        }
    }
    for (int i = 0; i < no_ele - d; i++)
        a[i] = a[i + d];
    j=d;
    for(int i=1; i<=d;i++)
    {
        a[no_ele-i]=temp[j-1];
        j--;
    }
        
    
    // cout<<"The ele of array are\n";
    for (int i = 0; i < no_ele; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase > 0)
    {
        arrayRotation();
        testcase--;
    }
    return 0;
}
