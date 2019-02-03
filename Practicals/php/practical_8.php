<?php
	#Practical 8: Remove whitespace from string 

	$string = "Kaushal is Rising Star ";

	echo $string."\n";

	$string  = preg_replace('/\s+/', '', $string );
	echo $string."\n";

?>
