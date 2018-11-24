/* Practical 10
   implementation  Preemptive scheduling 
*/

#include<stdio.h>

int main()
{
	
	int size=3;
	int cpu_limit_time=0;
	int register_for_arrival[20]; 	//20 because of cpu_limit_time


	
	typedef struct proces
	{	
		int pid;
		int btime;
		int atime;		//arrival time of the process
		int priority;
	
	}proces;
	proces process[3];
	process temp;

	printf("Note : Priority has range between 1 to 10 and 1 is  highest priority\n"); 
	printf("Note : Please insert arrival time between 0 to 20 \n");
	printf("Note : cpu is dead after 20s as maximum arrival time is at 20s \n\n");
        printf("\t\t Enter three processes for scheduling\n ");

        for(int i=0; i< size ; i++)
        {
                printf("\nEnter the pid :\t\t");
                scanf("%d",&process[i].pid);
                printf("\nEnter it's burst time :\t ");
                scanf("%d",&process[i].btime);
                printf("\nEnter it's priority :\t ");
                scanf("%d",&process[i].priority);
                printf("\nEnter it's arrival time:\t");
		scanf("%d",&process[i].atime);
		printf("\n");

        }
	
	
		//calculate cpu_limit_time
	for(int i=0 ; i<size ; i++)
	{
		cpu_limit_time += process[i].btime;
	}
	
	
		/*short accordin to arrival time 
		  using selection sort
		*/
	for(int i=0 ; i<size-1 ; i++)
	{
		for(int j=i+1 ; j<size ; j++)
		{
			if(process[j].atime < process[i])
			{
				temp.pid = process[i].pid;
				temp.atime = process[i].atime;
				temp.btime = process[i].btime;
				temp.priority = process[i].priority;
			
				process[i].pid = process[j].pid;
				process[i].atime = process[j].atime;
				process[i].btime = process[j].btime;
				process[i].priority = process[j].priority;
			
				process[j].pid = temp.pid;
				process[j].atime = temp.atime;
				process[j].btime = temp.btime;
				process[j].priority = temp.priority;
				
			}
		}
	}	

		//cpu execution 
	printf("clock\tPID\trequired\tburst time\tstatus\n");
	printf("\t       burst time\n\n");
	
	
	for(int clock=0; clock<=cpu_limit_time ;)
	{
		
	}
	
	return 0;
}
