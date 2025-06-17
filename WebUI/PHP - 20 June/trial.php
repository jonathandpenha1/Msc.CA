
<?php

/*WAP to print Good Morning if the seconds are <30 and Good afternoon if >30 */
echo "Hello World";

$time=date("s");
echo "<br>$time";

if($time<30)
echo "<br>Good Morning";

else
echo "<br>Good afternoon";
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Multiplication Table</title>
</head>
<body>
    <h1>Multiplication Table Generator</h1>
    <form method="post">
        <label for="number1">First number:</label>
        <input type="number" id="number1" name="number1" required>
        <br>
        <label for="number2">Second number:</label>
        <input type="number" id="number2" name="number2" required>
        <br>
        <input type="submit" value="Generate Table">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $number1 = intval($_POST["number1"]);
        $number2 = intval($_POST["number2"]);

        if ($number2 < $number1) {
            echo "Error: The second number must be greater than or equal to the first number.";
        } else {
            echo "<h2>Table for $number1 up to $number2</h2>";
            echo "<table border='1'>
                    <tr>
                        <th>Multiplier</th>
                        <th>Result</th>
                    </tr>";

            for ($i = $number1; $i <= $number2; $i++) {
                echo "<tr>
                        <td>$i</td>
                        <td>" . ($i * $number1) . "</td>
                      </tr>";
            }

            echo "</table>";
        }
    }
    ?>
</body>
</html>