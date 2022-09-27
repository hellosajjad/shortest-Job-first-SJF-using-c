#include<stdio.h>
#include<conio.h>
#define max 30
int main()
{
    int i, j, n,t,p[max],bt[max],wt[max];
    float awt = 0;
    printf("Enter The Process Number: ");
    scanf("%d", &n);
    printf("Enter the number of process : ");
    for(i =0; i<n; i++)
    {
        scanf("%d", &p[i]);

    }
    printf("Enter the value of the burst time: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &bt[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(bt[j]>bt[j+i])
            {
                t=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=t;

                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
            }
        }

    }

    printf("process\t burst time\t waiting time\n");
      for(i=0; i<n; i++)
      {
          wt[i]=0;
          //tat[i]=0;
          for(j=0; j<i; j++)
          {
              wt[i]=wt[i]+bt[j];
          }
//tat[i]=wt[i]+bt[i];
          awt=awt+wt[i];
         // atat=atat+tat[i];
          printf("%d\t %d\t\t %d\n",p[i],bt[i],wt[i]);
      }
      awt=awt/n;
      //atat=atat/n;
      printf("Avarage waiting time=%f\n",awt);
   // printf("Avarage turn around time=%f",atat);

    getch();

}
