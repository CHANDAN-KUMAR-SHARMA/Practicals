/* Practical 1(b)
   Parent and child and child are in same program 
   but executing different code
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>

int main(int argc , char *argv[])
{
	pid_t pid = fork();

	if(pid == 0)
	{
		printf("\nI am child , executing in same program with different code\n");
		printf("\nhi\n");
	}
	else if (pid > 0) 
	{
		printf("\nI am parent, executing in same program with different code\n");
		printf("\nhello\n");
	}
	else	
	 	perror("fork");


	return 0;

}
