#include <stdio.h>


int main(int a)
{
    int i, j,bt[10],t,n,wt[10],tt[10],w1=0,t1=0;
    float aw,at;
    printf("Enter No of Process : ");
    scanf("%d",&n);
    printf("Ente the Burst Time of Processes : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(bt[i] > bt[j])
            {
                t = bt[i];
                bt[i] = bt[j];
                bt[j] = t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",bt[i]);
    }
    for(i=0;i<n;i++)
    {
        wt[0] = 0;
        tt[0] = bt[0];
        wt[i+1] = bt[i] + wt[i];
        tt[i+1] = tt[i] + bt[i+1];
        w1 = w1 + wt[i];
        t1 = t1 + tt[i];
    }
    aw = w1/n;
    at = t1/n;
    printf("\nWaiting Times...");
    for(i=0;i<n;i++)
    {
        printf("%d\t",wt[i]);
    }
    printf("\nTurn Around Times....");
    for(i=0;i<n;i++)
    {
        printf("%d\t",tt[i]);
    }
    printf("\nAverage Waiting Time : %f",aw);
    printf("\nAverage Turn Around Time : %f",at);
}
