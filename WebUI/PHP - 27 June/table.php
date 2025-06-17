<html>
    <body>
        <center><h1>Photo Gallery </h1> <br> </center>
    <head>
        <style>
                table {
                    border-collapse: collapse;   
                }

                td {
                    border: 1px solid black;
                    padding: 10px;
                    text-align: center;
                }
        </style>

    </head>
        <table align="center" cellpadding="2" border="1">
           
             <?php      

                $myImages=array("img1.png","img2.png","img3.png");
          
                $counter="0";

                for($row=0;$row<3;$row++){
                    echo "<tr>\n";

                        for($col=0;$col<3;$col++){
                        
                             echo "\t <td> \n"
                                echo "<a href = 'images/".$myImages[$counter]."'>";
                                    echo "<img src='thumbnails/".$myImages[$counter]."'>";
                                echo "</a>"
                             echo "\t <td> \n";
        
                                
                            // echo "\t <td>$counter</td> \n";

                            $counter++;
                    }
                echo "</tr> \n";

                }
            ?>

        </table>
    </body>
</html>
