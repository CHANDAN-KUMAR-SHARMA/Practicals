<?php
	# Practical 6 : Check given string is palindrome or not.i

	$str = $argv[1];

	function palindrome($str)
	{
		if(strrev($str) == $str)
			return NULL;

		return " not";
	}

	echo $str." is".palindrome($str)." palindrome\n";

	#Author : Chandan Kumar Sharma
?>
