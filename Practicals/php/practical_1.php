<?php
	$num1=3;
	$num2=6;
	$num3=9;
	echo"Numbers are : ".$num1." , ".$num2." , ".$num3." \n";
	# max function for finding the maximum value between them 
	/*$max=max($num1,$num2,$num3);
	
	echo"The greatest  number using max function = ". $max."\n";
	*/
	//linear search algorithm for finding greatest number between three interger
	
	$max=$num1;
	if($num2>$max)
		$max=$num2;
	if($num3>$max)
		$max=$num3;
	
	echo"Maximum number between three is ".$max."\n";

	
?>
