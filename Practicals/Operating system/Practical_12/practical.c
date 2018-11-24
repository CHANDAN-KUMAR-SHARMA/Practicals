/* 	Using pthread 
 	Practical 12 
*/

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void * thread_function(void *ptr);

	
int main()
{
	pthread_t thread;

	
	
	pthread_create(&thread , NULL , thread_function , NULL); 		//thread created with give function "thread function"
	pthread_join(thread , NULL);						//getting resources on finishing of thread 
	
	return 0;
}


void  * thread_function(void * ptr)
{
	int * number =(int *) malloc (100*sizeof(int));
	
	int * size =(int *)  malloc (sizeof (int )) ;
	printf("\n How many number you want to sum : ");
	scanf("%d",size);
	
	printf("\n");
	for(int i=0;i<*size;i++)
	{
		printf("Enter the number :\t ");
		scanf("%d",&number[i]);
		printf("\n");
	
	}

	int * sum =(int *) malloc(sizeof(int));
	*sum =0 ;
	for(int i=0;i<*size;i++)
	{
		*sum += number[i];
	}
	
	printf("\n\t Sum of the numbers =  %d \n\n", *sum);  

	free(number);
	free(size);
	free(sum);
	
	return NULL;
}
