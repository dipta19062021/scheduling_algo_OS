#include<stdio.h>
#define max 30

void main(){
        int i,j,n,tat[max],wt[max],bt[max];
        float awt=0,avtat=0;
        printf("Enter the number of processes");
        scanf("%d", &n);
        printf("Enter the burst time:");
        for(i=0;i<n;i++)
        {
            scanf("%d",&bt[i]);
        }

        printf("process\tburst time\twaiting time\tturn aroundtime\n");
        for(i=0;i<n;i++)
        {
            wt[i]=0;
            tat[i]=0;
            for(j=0;j<i;j++){
                wt[i]=wt[i]+bt[j];
            }
            tat[i]=wt[i]+bt[i];
            awt=awt+wt[i];
            avtat=avtat+tat[i];
            printf("%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
        }

        awt=awt/n;
        avtat=avtat=avtat/n;
        printf("Average waiting time is %f\n",awt);
        printf("Average turn around time is %f\n", avtat);
}
