<?php
	#Practical 11 : Check whether string contains another string 

	$str = 'This is string ';
	$sub_str = $argv[1];

	if(strpos($str,$sub_str)==true)
		echo "\"$str\"  contains \"$sub_str\" \n";
	else 
		echo " \"$str\"  does not  contain  \"$sub_str\" \n";


#Author : Chandan Kumar Sharma
