<?php 
	//Practical 14 : Program to validate email format 

	$email = $argv[1];
	
	if(!filter_var($email , FILTER_VALIDATE_EMAIL))
		echo " Invalid email format \n";
	else 
		echo " Valid email format \n";

