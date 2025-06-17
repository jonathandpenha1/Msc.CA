<?php
    $servername="localhost";
    $username="rachel";
    $password="Lovelydog10!";

    //create connection
    $conn = new mysqli($servername,$username,$password);

    //check conn
      if($conn->connect_error){
        die("Connection failed: ".$conn->connect_error);
      }

      echo "Connected successfully";
      $conn->close();
?>
