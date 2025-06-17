<html>
<body>

<php
    echo $_GET['n1'];
    echo $_GET['n2'];
    
    for($i = 1 ; $i<=$_GET['n2'] ; $i++)
    {
        $prod =  $i * $_GET['n1'];
        echo "$prod";
    }
    
?>
</body>
</html>

