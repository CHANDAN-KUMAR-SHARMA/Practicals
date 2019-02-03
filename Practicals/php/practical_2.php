<?php
	#Practical 2 : Calculate the factorial 
	$num = $argv[1];
	
	if($num<=0)
		exit(-1);
	
	
	function fact($num)
	{
		if($num==1)
			return 1;
		else 
			return($num*fact($num-1));
	}
	
	echo "Factorial of $num = ".fact($num)."\n";


?>
