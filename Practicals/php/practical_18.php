<?php
//unfinished

	#Practical 18 : Print fibbonacci series using recursion 
	$n = $argv[1];

	//recursive algorithm for recursive fibbonaci
	function fib($n)
	{
		if($n==0)
			return 0;
		elseif($n==1)
			return 1;
		else
			return(fib($n-1)+fib($n-2));
	}	
		
	echo"fibbonacci series till $n position :\n";
	for($i=0;$i<$n;$i++)
		echo fib($i)." ";

	echo"\n";
	
