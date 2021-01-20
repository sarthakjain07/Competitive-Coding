#include<stdio.h>
#include<stdlib.h>
#include <string.h> 

// int main_max=2147483647; This method will not work as numbers can repeat instead of this we will use make max zero technique
int maxPosition(int * a,int size)
{
    int max=0,max_position=0;
    for(int i=0; i<size; i++)
    {
        if(max<a[i])
        {
            max=a[i];
            max_position=i;
            // a[i]=0;
        }
    }
    // main_max=max;
    return max_position;
}

int main()
{
    int objects,bag_size,wt=0,max_position;
    printf("Enter the total number of objects and size of bag\n");
    scanf("%d %d",&objects,&bag_size);
    int *profit,*weight,*profit_by_weight,*knapsack;
    profit=(int *)malloc(objects*sizeof(int));
    weight=(int *)malloc(objects*sizeof(int));
    profit_by_weight=(int *)malloc(objects*sizeof(int));
    knapsack=(int *)malloc(objects*sizeof(int));
    

    for (int i = 0; i < objects; i++)
    {
        printf("Enter profit for object %d\n",i+1);
        scanf("%d",&profit[i]);
        printf("Enter weight for object %d\n",i+1);
        scanf("%d",&weight[i]);
        profit_by_weight[i]=profit[i]/weight[i];
    }
    
    // initializing all elements to zero usinf memset function
    memset(knapsack,0,objects*sizeof(int));

    while(wt<=bag_size)
    {   
        max_position=maxPosition(profit_by_weight,objects);
        profit_by_weight[max_position]=0; // best method for finding and removing maximum element from array
        wt=wt+weight[max_position];
        if(wt>bag_size)
        {
            int extra=wt-bag_size;
            weight[max_position]=weight[max_position]-extra;
        }
        knapsack[max_position]=profit[max_position];
    }
    printf("Weight in knapsack is:%d\n",wt);
    printf("Profits in knapsack according to weight are \n:");
    for (int i = 0; i < objects; i++)
        printf("%d\n",knapsack[i]);
    
    
}