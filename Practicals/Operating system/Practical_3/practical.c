/* practical 3 
   program to print kernel version and memory information
*/

#include<stdlib.h>
#include<stdio.h>

int main()
{
	printf("\nThe kernel information : \n");
	system(" uname -a | more");
	printf("\n\nThe memory information : \n");
	system("cat /proc/meminfo");
	return 0; 
}
