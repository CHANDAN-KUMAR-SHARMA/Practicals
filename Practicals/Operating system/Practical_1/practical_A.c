/* Program for practical 1(a) 
   Parent and child execute same program , same code 
 */


#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	pid_t pid;
	
	pid = fork();
	if(pid == 0)
		printf("I am child process and executing same program with same code\n ");
	else if (pid > 0)	
		printf("I am parent process and executing same program with same code\n ");
	else
		perror("fork");

	//code to be executed by parent and child 
	printf("\nhi there\n");

	exit(0);
	return 0;
}

