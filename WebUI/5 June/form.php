<html>

<body>

Enter Values
<form method="get">
    Enter First Number: <input type="number" name="n1"/><br>
    Enter Second Number: <input type="number" name="n2"/><br>
    <input type="submit"/>
</form>


<?php
    echo $_GET['n1'];
<br>
    echo $_GET['n2'];
    
    for($i = 1 ; $i<=$_GET['n2'] ; $i++)
    {
        $prod =  $i * $_GET['n1'];
        echo $prod;
    }
    
?>


</body>
</html>

