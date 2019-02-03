<!Doctype html>
<!-- Practical 17 : echo hello of selected language  
	Run this program on server 
	-->
	
    <head>
        <title>PHP  practical  program 17</title>
    </head>
    <body>
        <form method="POST" action="#">
            Select Your Language:
            <select name="lgn">
                <option value="op1">English</option>
                <option value="op2">Spanish</option>
                <option value="op3">German</option>
                <option value="op4">French</option>
            </select>
            <br/>
            <input type="Submit" name= "Submit">
        </form>
    </body>
    </html>


<?php

       if(isset($_POST['Submit']))
       {   
           $op=$_POST['lgn'];
           
           switch($op)
           {   
              case 'op1': echo "Hello";
                              break;
             case 'op2': echo "Hola";
                              break;
             case 'op3': echo "Hallo";
                             break;
              case 'op4': echo "Bonjour";
         }
      }
  ?>

