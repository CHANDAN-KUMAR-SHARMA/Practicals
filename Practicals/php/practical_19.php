<?php
	#Practical 19 : Replacing the first 'the' in the string with 'That'

	$str = "the quick brown fox jump over the lazy dog ";
	echo"String :\n".$str."\n\n";

	echo"String after replacing the first occurence of 'the' with 'That' : \n". preg_replace('/the/', 'That', $str, 1)."\n";

#Author : Chandan Kumar Sharma 
