<?php

	#Practical 9: Find the sum of find n odd number 

	$n = $argv[1];
	$sum=1;
	$odd=1;

	for($i=1;$i<$n; $i++)
	{
		$odd+=2;
		$sum+=$odd;
	}	
	echo"The sum of ".$n." is  ".$sum."\n";
	
#Author : Chandan Kumar Sharma`
