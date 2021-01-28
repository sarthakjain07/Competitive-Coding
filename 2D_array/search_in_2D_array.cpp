#include<iostream>
using namespace std;
// global variables 
int row,column;

// void printArray(int a[row][column])
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//             cout<<a[i][j];
//         cout<<endl;          
//     }
// }

int main()
{
    int ele;
    bool flag=false; // we will make it true if we find the element
    cin>>row>>column>>ele;
    int a[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cin>>a[i][j];      
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            // cout<<a[i][j]<<" "; to print the elements
            if(ele==a[i][j])
                flag=true;
        // cout<<endl;          
    }
    if(flag)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;




    
    
    
    return 0;
}