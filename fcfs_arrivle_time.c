#include<stdio.h>
#define max 30

void main(){
        int i,j,n,tat[max],wt[max],bt[max],at[max],temp[max];
        float awt=0,avtat=0;
        printf("Enter the number of processes");
        scanf("%d", &n);
        printf("Enter the burst time:");
        for(i=0;i<n;i++)
        {
            scanf("%d",&bt[i]);
        }
        printf("Enter the arrivle time:");
        for(i=0;i<n;i++)
        {
            scanf("%d",&at[i]);
        }
        temp[0]=0;
        printf("Process Id\tBurst Time\tarrival Time\twaiting time\tturnaround time\n");

                for(i=0;i<n;i++)
                {
                    wt[i]=0;
                    tat[i]=0;
                    temp[i+1]=temp[i]+bt[i];
                    wt[i]=temp[i]-at[i];
                    tat[i]=wt[i]+bt[i];
                    awt=awt+wt[i];
                    avtat=avtat+tat[i];
                     printf("%d\t\t%d\t\t%d\t\t%d\t\t\t%d\n",i+1,bt[i],at[i],wt[i],tat[i]);

                }

                awt=awt/n;
                avtat=avtat/n;
                printf("Average waiting time is %f\n",awt);
                printf("Average turnaround time is %f",avtat);


            }

