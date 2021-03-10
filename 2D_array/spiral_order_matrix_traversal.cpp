#include<iostream>
using namespace std;

int main()
{
    int row,column,i;
    cin>>row>>column;
    int a[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cin>>a[i][j];      
    }
    // logic for writing spiral traversal of matrix
    int row_start=0,row_end=row-1,col_start=0,col_end=column-1;
    while (row_start<=row_end && col_start<=col_end)
    {
        // top rows
        for(i=col_start;i<=col_end;i++)
            cout<<a[row_start][i]<<" ";
        row_start++;

        // last columns
        for(i=row_start;i<=row_end;i++)
            cout<<a[i][col_end]<<" ";
        col_end--;

        // last rows
        for(i=col_end;i>=col_start;i--)
            cout<<a[row_end][i]<<" ";
        row_end--;

        // first columns
        for(i=row_end;i>=row_start;i--)
            cout<<a[i][col_start]<<" ";
        col_start++;            
    }
    return 0;
}