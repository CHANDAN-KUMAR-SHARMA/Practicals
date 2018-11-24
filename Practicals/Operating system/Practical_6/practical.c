/* Practical 6 
   FCFS implementaion
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size = 3;
	int pid[size];
	int bt[size];
	int ctime=0;
	printf("\nEnter Three process for implemenation of FCFS : \n ");
	for(int i = 0; i<size ; i++)
	{
		printf("\nEnter the process %d  with PID : \t", i+1);
		scanf("%d", &pid[i]);
		printf("\nEnter PID = %d  burst time : \t", i+1);
		scanf("%d", &bt[i]);
		printf("\n");
	}
	
	//implementation of FCFS
	
	printf("\n============  Process execution  ==============\n");
	printf("clock \t PID \t burst time\n");
	
	for(int i=0;i<=size;i++)
	{
		printf("\t %d \t %d \t %d",ctime,pid[i],bt[i]);
		
		ctime += bt[i];
		printf("\n");
	}
		
	return 0;
}
	
