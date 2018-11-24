/*  Practical 8 
    Implementation of SJF algorithm 
*/

#include<stdio.h>


int main()
{
	int size = 3;
	
	typedef struct process
	{
		int pid , btime;
	}processs;
	processs process[3];
	
	processs temp;	
	int clock=0;
	
		  //taking food for SJF
	printf("\n\t\tEnter three process for scheduling  \n");
        for(int i=0; i<size ; i++)
        {
                printf("\nEnter the process PID : \t \t ");
                scanf("%d",&process[i].pid);
                printf("\nEnter the burst time this process : \t ");
                scanf("%d",&process[i].btime);
                printf("\n");
        }
	
	
	printf("\n\n  clock \t PID\tburst time\n");
		//implementation for SJF 

	
	for(int i=0; i <size ; i++)
	{
		
		for(int j=i; j<size ; j++)
		{
			if(process[j].btime < process[i].btime)	
			{
				temp.pid = process[i].pid ;
				temp.btime = process[i].btime;
				
				process[i].pid = process[j].pid;
				process[i].btime = process[j].btime;
				
				process[j].pid = temp.pid ;
				process[j].btime = temp.btime; 
			}
			
			
		}
		printf("\n   %d\t\t%d\t  %d", clock , process[i].pid, process[i].btime);
		printf("\n");
		clock += process[i].btime;
	}	
	
	printf("\n\n\t\tTotal cpu execution time is %d\n\n", clock);
	

	

	return 0;

}

