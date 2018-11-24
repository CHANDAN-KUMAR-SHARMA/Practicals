/* 	practical_13 : WAP to calculate GCD of 2 number (i) with recursion (ii) without recursion
		
	author : Chandan Kumar Sharma 
	year   : 2018 ( 3rd semester )
*/


#include <iostream>

using namespace std;


int iterative_gcd(int a , int b)
{
	while (a != b)
	{

	        if (a > b)
			a = a - b;
		else
			b = b - a;
   	 };

    return a;

}


int recursive_gcd(int a , int b)
{

	if (a == 0) 
		return b; 
	if (b == 0) 
		return a; 
   
    // base case 
	if (a == b) 
		return a; 
   
    // a is greater 
	if (a > b) 
		return recursive_gcd(a-b, b); 
	
	return recursive_gcd(a, b-a); 

}


int main()
{

	/* 
		GET gcd of two number by calling gcd(number 1 , number 2)
	*/	

	return 0;
}
