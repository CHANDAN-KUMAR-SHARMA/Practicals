#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>

int main( int argc , char **argv ) 
{
	int n;
	char b;
	int s,d;
	if(argc != 3)
	{
		printf("\n\t Program required only two argument : source and destination file name respectivly \n");
		exit(0);
	}
	else 
	{
		s = open(argv[1] , O_RDONLY);
		if(s == -1 )
		{
			printf("\nUnable to open source \n");
			exit(0);
		}
		else 
		{
			d = open(argv[2] , O_WRONLY | O_CREAT);
			if(d == -1)
			{
				printf("\nUnable to open/create destination \n");
				return -1;
			}
			else
			{
				while((n = read(s , &b , 1)) != -1)
				{
					write(d , &b ,1);
				}
				write(STDOUT_FILENO ,"\nFile Copied\n" , 17);
				
			}
			close(d);
		}	
		close(s);
	}
	
	return 0;
}
