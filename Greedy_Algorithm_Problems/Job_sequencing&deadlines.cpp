# include <iostream>
# include <climits>
# include <cstring>
# include <valarray>
using namespace std;

// int main_max=INT_MAX;
int maxPosition(int * a, int size)
{
    int max=0,max_po=0;
    for (int i = 0; i < size; i++)
    {
        if(max<a[i])
        {
            max=a[i];
            max_po=i;
        }
    }
    // main_max=max;
    return max_po;

}

int main()
{
    int size=7,main_size,max,profit_at_point;
    int *profit,*deadline,*Jobs;
    profit=(int *)malloc(size*sizeof(int)); 
    deadline=(int *)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("Enter profit %d\n",i+1);
        scanf("%d",&profit[i]);
        printf("Enter deadline %d\n",i+1);
        scanf("%d",&deadline[i]);
    }
    
    main_size=deadline[maxPosition(deadline,size)];
    Jobs=(int *)malloc(main_size*sizeof(int));
    int j=main_size-1;
    // initializing all elements to zero usinf memset function
    memset(Jobs,0,main_size*sizeof(int));
    int m,sum=0;
    for (int i = 0; i < main_size; i++)
    {

        max=maxPosition(profit,size);
        m=deadline[max];
        if(Jobs[m-1]==0)
        {
            Jobs[m-1]=profit[max];
            j--;
        }
        else if(Jobs[j]==0 && m-1>=j)
        {
            Jobs[j]=profit[max];
            j--;
        }
        profit[max]=-1;
    }
    for (int i = 0; i < main_size; i++)
        cout<<Jobs[i]<<"\t";
    cout<<"Maximum profit is"<<endl;
    for (int i = 0; i < main_size; i++)
        sum=sum+Jobs[i];
    cout<<sum<<endl;    

    
     
    return 0;
}