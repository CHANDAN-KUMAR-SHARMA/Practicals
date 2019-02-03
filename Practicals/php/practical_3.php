<?php
	#Practical 3 : Check whether number is prime or not 
	
	$num=$argv[1];
	function prime($num)
	{
		//algorithm for checking prime number
		/* Using the property of prime number :
			If a given  number is not divisible by a number that is less than or equal to the square root of that given  number  
			then given number is a prime number.
		*/

		for($i=2;$i<=sqrt($num);$i++)
			if($num % $i == 0)	
				return " not";
		
		
		return NULL;
	}


	echo $num." is".prime($num)." a prime number\n";

	#Art by Chandan Kumar Sharma	
?>
