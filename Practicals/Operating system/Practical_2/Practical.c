/* practical 2 
   program to print kernel version , cpu information  
*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
	printf("\nInformation of kernel  :  \n");
	system("uname -a ");
	printf("\nInformation of cpu  : \n");
	system("more /proc/cpuinfo");

	return 0;
	
}
