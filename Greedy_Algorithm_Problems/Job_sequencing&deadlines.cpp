# include <iostream>
# include <climits>
using namespace std;

int main_max=INT_MAX;
int maxPosition(int * a, int size)
{
    int max=0,max_po=0;
    for (int i = 0; i < size; i++)
    {
        if(max<a[i] && a[i]<main_max)
        {
            max=a[i];
            max_po=i;
        }
    }
    main_max=max;
    return max_po;

}

int main()
{
    int size=7,main_size,max;
    int *profit,*deadline,*Jobs,*a;
    profit=(int *)malloc(size*sizeof(int)); 
    // deadline=(int *)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("Enter profit %d\n",i+1);
        scanf("%d",&profit[i]);
        // printf("Enter deadline %d\n",i+1);
        // scanf("%d",&deadline[i]);
    }
    
    // main_size=deadline[maxPosition(deadline,size)];
    // Jobs=(int *)malloc(main_size*sizeof(int));
    // a=profit;
    for (int i = 0; i < size; i++)
    {
        max=maxPosition(profit,size);
        // if(Jobs[deadline[max]-1]==0)
        //     Jobs[deadline[max]-1]=a[max];
        printf("%d\n",profit[max]);
    }
    
    
     
    return 0;
}