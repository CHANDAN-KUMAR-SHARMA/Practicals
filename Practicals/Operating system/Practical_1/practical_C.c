/* Practical 1(c)
   parent is waiting for child to finish its task
*/

#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc , char * argv[])
{
	int status;
	pid_t  pid;
	
	pid = fork();
	
	if(pid > 0)
	{
		printf("\nparent is waiting\n");
		if( (pid = wait(&status)) < 0)
		{
			perror("wait");
			_exit(2);
		}

		printf("\nwaiting is done. Now , Parent will finish its task\n");
		
		printf("\nhello\n");
		printf("\nTask complete by  parent \n ");

	}
	else if (pid == 0)
	{
		printf("I am child and  i am execuing different code ");
		
		char * ls_args[] = {"./practical_A", NULL};	
		execvp(ls_args[0],ls_args);
		
	}	
	else
		perror("fork");
	
	
		
	return 0;
}
