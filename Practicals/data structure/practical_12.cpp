/* practical_12 : WAP to display fibonacci series (i)using recursion, (ii) using iteration

	author : Chandan Kumar Sharma
	year   : 2018 (3rd semester ) 
*/


#include <iostream>

using namespace std;



int iterative_fibonacci(int n)		// fibonacci series at nth position 
{
	int a = 0, b = 1, c, i; 
	if( n == 0) 
		return a; 
	for (i = 2; i <= n; i++) 
	{ 
		c = a + b; 
		a = b; 
		b = c; 
 	 }	 
 	 return b; 

}


int recursive_fibonacci(int n) 		//fibonacci series at nth position
{
	if (n <= 1) 
		return n; 
	
	return recursive_fibonacci(n-1) + recursive_fibonacci(n-2); 

}


int main()
{
	
	/*
	 *	for (int i=0 ; i< n ; i++)
	 *	
	 *		cout<<" fibonacci number at nth position  call by either recursive_fibonacci(i) 
	 *			or iterative_fibonacci(i)";
	 */

		

	return 0;
}
