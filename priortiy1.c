//priority scheduling with arrival time program in c

#include<stdio.h>
#define max 30

void main(){
            int i,n,j,k=1,t,min,temp[max],pr[max],bt[max],at[max],wt[max],tat[max],b=0;
            float awt=0,avtat=0;
            printf("Enter total number of process");
            scanf("%d",&n);
            for(i=0;i<n;i++){
            printf("Enter the burst time, arrival time and priority of the process");
            scanf("%d%d%d",&bt[i],&at[i],&pr[i]);
            }
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(at[i]<at[j])
                        {
                            t=at[j];
                            at[j]=at[i];
                            at[i]=t;

                            t=bt[j];
                            bt[j]=bt[i];
                            bt[i]=t;

                        }
                }
            }
                for(j=0;i<n;j++)
                    {
                        b=b+bt[i];
                        min=bt[k];
                        for(i=k;i<n;i++)
                        {
                            min=pr[k];
                            if(b>=at[i])
                            {
                                if(pr[i]<min)
                                {
                                    t=at[k];
                                    at[k]=at[i];
                                    at[i]=t;


                                    t=bt[k];
                                    bt[k]=bt[i];
                                    bt[i]=t;


                                    t=pr[k];
                                    pr[k]=pr[i];
                                    pr[i]=t;
                                }
                        }

                        }
                        k++;
                    }
                        temp[0]=0;
                        printf("Process Id\tBurst Time\tarrival Time\tprioraity\twaiting time\tturnaround time\n");

                for(i=0;i<n;i++)
                {
                    wt[i]=0;
                    tat[i]=0;
                    temp[i+1]=temp[i]+bt[i];
                    wt[i]=temp[i]-at[i];
                    tat[i]=wt[i]+bt[i];
                    awt=awt+wt[i];
                    avtat=avtat+tat[i];
                     printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],at[i],pr[i],wt[i],tat[i]);

                }

                awt=awt/n;
                avtat=avtat/n;
                printf("Average waiting time is %f\n",awt);
                printf("Average turnaround time is %f",avtat);


            }
