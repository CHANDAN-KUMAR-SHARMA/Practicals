/*  Practical 9
    implementation of non preemptive priority based scheduling 
*/


#include<stdlib.h>
#include<stdio.h>


int main()
{
	int clock=0;
	int size =3;
	typedef struct proces
	{
		/* priority range between 1 to 10 
		   1 is highest priority 
		*/
		int priority;
		int pid;
		int btime; 	//burst time for the process
		 		
	}proces;
	
	proces process[3];
	proces temp;		//used for shorting
	
	printf("Note : priority has range between 1 to 10 and 1 is  highest priority\n"); 
	printf("\t\t Enter three process for scheduling\n ");
	for(int i=0; i< size ; i++)
	{
		printf("\nEnter the pid :\t\t");
		scanf("%d",&process[i].pid);
		printf("\nEnter it's burst time :\t ");
		scanf("%d",&process[i].btime);
		printf("\nEnter it's priority :\t ");
		scanf("%d",&process[i].priority);
		printf("\n");
	}
	
		//short according to priority
	
	for(int i=0 ;i<size;i++)
	{
		for(int j=i;j<size;j++)
		{
			if(process[j].priority< process[i].priority)
			{
				//code for swaping
				temp.pid = process[i].pid;
				temp.btime = process[i].btime;
				temp.priority = process[i].priority;

				process[i].pid = process[j].pid;
				process[i].btime = process[j].btime;
				process[i].priority = process[j].priority;

				process[j].pid =  temp.pid;
				process[j].btime = temp.btime;
				process[j].priority = temp.priority;
			}
		}
	}
	
		//cpu execution

	printf("clock\tpid\tburst time\tpriority\n");
	for(int i=0;i<size;i++)
	{	
		printf(" %d\t%d\t    %d   \t%d\n",clock,process[i].pid,process[i].btime,process[i].priority);
	  	clock += process[i].btime;
		
	}
	
	printf("\n\t\tTotal cpu execution time is %d\n",clock);
	

	return 0;
}
