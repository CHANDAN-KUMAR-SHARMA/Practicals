/* 	practica_12 : WAP to calculate factorial and to compute the factors of a given no.
		 (i) using recursion, (ii) using iteration
	
	author : Chandan Kumar Sharma
	year   : 2018 ( 3rd semester )

*/

#include<iostream>

using namespace std;

int iterative_factor(int n)
{
	for(int i = 1; i <= n/2; ++i)
	{
        	if(n % i == 0)
          	  	cout <<"  "<< i;;
   	 }
	
	cout<< endl;

}



int recursive_factor(int n)
{

	
	for(int i=0 ; i<n/2 ;)
	{

		if (n%i==0)
		{
			cout<<" "<<i<<" ";
			n=n/i;
			recursive_factor(n);
			break;
		}
		else i++;
	}
}




int iterative_factorial(int n)
{
		int result=1,i=1;
		while(i<=n){
			result=result*i;
			i++;
		}
		
		return result;
}




int recursive_factorial(int n)
{
    if(n > 1)
        return n *recursive_factorial(n - 1);
    else
        return 1;
}









int main()
{

	return 0;

}
