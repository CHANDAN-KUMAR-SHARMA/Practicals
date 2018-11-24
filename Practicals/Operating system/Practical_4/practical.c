#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(int argc , char **argv)
{
	if (argc != 2)
		return -1;

	struct stat fileStat;
	if(stat(argv[1],&fileStat) < 0)
	{ 	printf("\nGive file correct file\n ");
		return -1;
	}
	
	printf("Information for %s \n",argv[1]);
	printf("\nfile serial number : \t %lu ",fileStat.st_ino);
	printf("\nUser ID  of file : \t %d",fileStat.st_uid);
	printf("\nSize of file :  \t %ld ",fileStat.st_size);
	printf("\nPermissions : ");
	printf("\n\tUser : \t\t ");
	printf( (fileStat.st_mode & S_IRUSR) ? "r" : "-");
	printf( (fileStat.st_mode & S_IWUSR) ? "w" : "-");
	printf( (fileStat.st_mode & S_IXUSR) ? "x" : "-");
	printf("\n\tGroup : \t ");
	printf( (fileStat.st_mode & S_IRGRP) ? "r" : "-");
	printf( (fileStat.st_mode & S_IWGRP) ? "w" : "-");
	printf( (fileStat.st_mode & S_IXGRP) ? "x" : "-");		
	printf("\n\tOthers : \t ");
	printf( (fileStat.st_mode & S_IROTH) ? "r" : "-");
	printf( (fileStat.st_mode & S_IWOTH) ? "w" : "-");
	printf( (fileStat.st_mode & S_IXOTH) ? "x" : "-");
	printf("\n\n");
	
	printf("File %s symbolic link\n", (S_ISLNK(fileStat.st_mode)) ? "is" : "is not");

	return 0;

//biblography : pubs.opengroup.org/onlinepubs/009695399/basedefs/sys/stat.h.html
	
}
