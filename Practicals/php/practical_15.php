<?php
	#Practical 15: Print n even number 
	$n = $argv[1];
	$even=2;
	for($i=1;$i<=$n;$i++,$even+=2)
	{
		echo $even." ";
	}
echo"\n";
