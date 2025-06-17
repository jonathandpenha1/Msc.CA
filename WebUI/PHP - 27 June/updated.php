<!-- USE FILE TO READ THE IMAGES -->


<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Photo Gallery</title>
    <style>
        table {
            border-collapse: collapse;
            margin: 20px auto; /* Center the table horizontally */
        }

        td {
            border: 1px solid black;
            padding: 10px;
            text-align: center;
        }

        img {
            max-width: 100px; 
            height: auto;
        }
    </style>
</head>
<body>
    <center><h1>Photo Gallery</h1></center>
    <table cellpadding="2" border="1">
        <?php
            $myImages = file("images.txt");
            $counter = 0;

            for ($row = 0; $row < 3; $row++) { 
                echo "<tr>\n";
                for ($col = 0; $col < 3; $col++) { // Adjust the loop count as per your images count
                    echo "\t<td>\n";
                        echo "\t<a href='images/".$myImages[$counter]."'>\n";

                            echo "\t<img src='thumbnails/".$myImages[$counter]."'>\n";

                        echo "\t</a>\n";
                    echo "\t</td>\n";

                        // echo "\t <td>$counter</td> \n"; //to print numbers
                    $counter++;
                }
                echo "</tr>\n";
            }
        ?>
    </table>
</body>
</html>

