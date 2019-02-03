<?php
	#Pratical 10 : Check whether user is register in database or not 

	   $dbhost = 'localhost:3306';
	  $dbuser = 'root';
    $dbpass = '98SeventyOne74&$62';
	   
	 $conn = mysqli_connect($dbhost, $dbuser, $dbpass);
				      
	     if(! $conn ) {
	       die('Could not connect: ' . mysqli_error());
				      }
		else 
		echo "connected \n";

		mysqli_close($conn);

