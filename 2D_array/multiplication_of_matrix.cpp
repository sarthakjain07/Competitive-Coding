#include<iostream>
using namespace std;

int main()
{
    int row1,row2_col1,col2,i,j;
    cin>>row1>>row2_col1>>col2;
    int a[row1][row2_col1],b[row2_col1][col2],ans[row1][col2];
    
    //taking input for array 1
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < row2_col1; j++)
            cin>>a[i][j];      
    }

    // taking input for array 2
    for (int i = 0; i < row2_col1; i++)
    {
        for (int j = 0; j < col2; j++)
            cin>>b[i][j];      
    }

    //initializing all elements of main array to zero
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
            ans[i][j]=0;      
    }

    // logic to multiply the arrays
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for(int k=0;k<row2_col1;k++)
                ans[i][j]+=a[i][k]*b[k][j];
        }      
    }
    // printing multiplied array
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;          
    }


    return 0;
}