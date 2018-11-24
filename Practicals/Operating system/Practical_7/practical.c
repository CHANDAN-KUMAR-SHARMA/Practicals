/*  Practical 7 :
    implementation of Round Robin scheduling algorithm
*/


#include<stdio.h>				//include header file for standard input and output (i.e., form shell)

int main()
{
	int size = 3;				// total nubmer of processes
	int pid[size] , btime[size];		// store pid and burst time for each  process respectively
	int total_cpu_time = 0 ; 		//limit for cpu to run implemented by mean of " for loop "
	int time_interval = 2;			//switch after this time
	int clock = 0;				// clock for the cpu 
	int is_finished[size];			//value to check whether each process is finished or not  
	int finished =0 ;			//change value if every processes finished to exit the from cpu
	int process_running_clock[size];	// running time for each process
		//taking food for Round Robin 	
	printf("\n\t\tEnter three process for scheduling  \n");
	for(int i=0; i<size ; i++)
	{
		printf("\nEnter the process PID : \t \t ");
		scanf("%d",&pid[i]);
		printf("\nEnter the burst time this process : \t ");
		scanf("%d",&btime[i]);
		printf("\n");
	}
		
		//initialization			
	for(int i = 0 ; i<size ; i++)
	{
		process_running_clock[i] = 0;
		is_finished[i] = 0;
		total_cpu_time += btime[i];
	}


		//print the time interval 
	printf("\n\n\t\tTime interval is  %d \n ",time_interval);
	

	printf("\n Clock \t PID \t \n");
	
		//implementation of Round Robin 
	for(int i = 0 ; clock <= total_cpu_time ; i++)
	{
		if(i >= size)
			i = 0;
			
		if(process_running_clock[i] < btime[i])
		{
			printf("  %d \t %d \t ",clock ,pid[i] );
			//mechanism 
			clock += time_interval;
			process_running_clock[i] += time_interval;
			
			//Beautification 
			if(process_running_clock[i] >= btime[i])
			{
				is_finished[i] = 1;
				printf("\t \t  Process finished ");
			}
			else 
				printf("\t \t  Process switched ");
		
			printf("\n");
			
		}
			
		for(int j=0;j<size-1;j++)
			finished = is_finished[j]&is_finished[j+1];
				
		if(finished)
			break;	
	}
	
	printf("\n\n\t\t cpu total running time : %d \n", clock);

	return 0;

	/*	
		Author : Chandan Sharma
	*/
}
